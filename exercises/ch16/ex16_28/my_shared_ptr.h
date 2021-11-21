#ifndef MY_SHARED_PTR_H
#define MY_SHARED_PTR_H
#include <iostream>
#include <functional>

class default_deleter {
public:
    template <typename _PointerType> 
    void operator()(_PointerType *p) const { delete p; }
};

template <typename T>
class my_shared_ptr {
public:
    struct deleter { virtual void destory() = 0; };
    template <typename _Deleter> struct deleter_impl : public deleter {
        _Deleter d;
        T *t;
        deleter_impl(T *t, _Deleter d) : deleter(), t(t), d(d) {}
        void destory() override { d(t); }
    };

    explicit my_shared_ptr(T *p = nullptr);
    template <typename _Deleter> explicit my_shared_ptr(T *p, _Deleter deleter);
    explicit my_shared_ptr(const my_shared_ptr &p);
    explicit my_shared_ptr(my_shared_ptr &&p);
    ~my_shared_ptr();

    my_shared_ptr &operator=(const my_shared_ptr &p);
    my_shared_ptr &operator=(my_shared_ptr &&p);
    T &operator*();
    const T &operator*() const;
    T *operator->();
    const T *operator->() const;
    operator bool() const;

    long use_count() const;
    bool unique() const;
    void reset(T *new_pt);
    template <typename _Deleter> void reset(T *new_pt, _Deleter deleter);
    T *get() const;

private:
    T *m_pointer;
    long *m_user_count;
    deleter *m_deleter;

    void destory(my_shared_ptr *p);
};

template <typename T>
my_shared_ptr<T>::my_shared_ptr(T *p)
    : m_pointer(p),
      m_user_count(new long(1)),
      m_deleter(new deleter_impl<default_deleter>(p, default_deleter()))
{
#ifdef NDEBUG
    std::cout << "new: " << p << std::endl;
    std::cout << "my_shared_ptr<T>::my_shared_ptr(T *p)" << std::endl;
#endif
}

template <typename T>
template <typename _Deleter>
my_shared_ptr<T>::my_shared_ptr(T *p, _Deleter deleter)
    : m_pointer(p),
      m_user_count(new long(1)),
      m_deleter(new deleter_impl<_Deleter>(p, deleter))
{
#ifdef NDEBUG
    std::cout << "new: " << p << std::endl;
    std::cout << "my_shared_ptr<T>::my_shared_ptr(T *p)" << std::endl;
#endif
}

template <typename T>
my_shared_ptr<T>::my_shared_ptr(const my_shared_ptr &p) 
    : m_pointer(p.m_pointer),
      m_user_count(p.m_user_count),
      m_deleter(p.m_deleter)
{
    ++*m_user_count;
#ifdef NDEBUG
    std::cout << "my_shared_ptr<T>::my_shared_ptr(const my_shared_ptr &p) " << std::endl;
#endif
}

template <typename T>
my_shared_ptr<T>::my_shared_ptr(my_shared_ptr &&p) 
    : m_pointer(p.m_pointer),
      m_user_count(p.m_user_count),
      m_deleter(p.m_deleter)
{
    p.m_pointer = 0;
    p.m_user_count = 0;
    p.m_deleter = 0;
#ifdef NDEBUG
    std::cout << "my_shared_ptr<T>::my_shared_ptr(my_shared_ptr &&p)  " << std::endl;
#endif
}

template <typename T>
my_shared_ptr<T>::~my_shared_ptr()
{
#ifdef NDEBUG
    std::cout << "my_shared_ptr<T>::~my_shared_ptr()" << std::endl;
#endif
    destory(this);
}

template <typename T>
my_shared_ptr<T> &my_shared_ptr<T>::operator=(const my_shared_ptr &p) {
#ifdef NDEBUG
    std::cout << "my_shared_ptr<T> &my_shared_ptr<T>::operator=(const my_shared_ptr &p)" << std::endl;
#endif
    if (&p == this) return *this;
    destory(this);
    m_user_count = p.m_user_count;
    m_pointer = p.m_pointer;
    m_deleter = p.m_deleter;
    ++*m_user_count;
    return *this;
}

template <typename T>
my_shared_ptr<T> &my_shared_ptr<T>::operator=(my_shared_ptr &&p) {
#ifdef NDEBUG
    std::cout << "my_shared_ptr<T> &my_shared_ptr<T>::operator=(my_shared_ptr &&p)" << std::endl;
#endif
    destory(this);
    m_user_count = p.m_user_count;
    m_pointer = p.m_pointer;
    m_deleter = p.m_deleter;
    p.m_pointer = 0;
    p.m_user_count = 0;
    return *this;
}

template <typename T>
T &my_shared_ptr<T>::operator*() {
    return *m_pointer;
}

template <typename T>
const T &my_shared_ptr<T>::operator*() const {
    return *m_pointer;
}

template <typename T>
T *my_shared_ptr<T>::operator->() {
    return m_pointer;
}

template <typename T>
const T *my_shared_ptr<T>::operator->() const {
    return m_pointer;
}

template <typename T>
my_shared_ptr<T>::operator bool() const {
    return m_pointer;
}

template <typename T>
inline long my_shared_ptr<T>::use_count() const {
    return *m_user_count;
}

template <typename T>
inline bool my_shared_ptr<T>::unique() const {
    return *m_user_count == 1;
}

template <typename T>
inline void my_shared_ptr<T>::reset(T *new_pt) {
    destory(this);
    m_pointer = new_pt;
    m_user_count = new long(1);
    m_deleter = new deleter_impl<default_deleter>(new_pt, default_deleter());
}

template <typename T>
template <typename _Deleter>
inline void my_shared_ptr<T>::reset(T *new_pt, _Deleter deleter) {
    destory(this);
    m_pointer = new_pt;
    m_user_count = new long(1);
    m_deleter = new deleter_impl<_Deleter>(new_pt, deleter);
}

template <typename T>
inline T *my_shared_ptr<T>::get() const {
    return m_pointer;
}

template <typename T>
void my_shared_ptr<T>::destory(my_shared_ptr *p) {
    --*p->m_user_count;
    if (*p->m_user_count == 0) {
#ifdef NDEBUG
        std::cout << "delete: " << p->m_pointer << std::endl;
#endif
        m_deleter->destory();
        delete m_user_count;
        delete m_deleter;
    }
}
#endif // MY_SHARED_PTR_H 
