#ifndef MY_UNIQUE_PTR_H
#define MY_UNIQUE_PTR_H
#include <utility>
class default_deleter {
public:
    template <typename _PointerType> 
    void operator()(_PointerType *p) const { delete p; }
};

template <typename T, typename _Deleter = default_deleter>
class my_unique_ptr {
public:
    explicit my_unique_ptr(T *t = 0);
    explicit my_unique_ptr(T *t, _Deleter deleter);
    explicit my_unique_ptr(const my_unique_ptr &) = delete;
    my_unique_ptr(my_unique_ptr &&);
    ~my_unique_ptr();

    my_unique_ptr &operator=(const my_unique_ptr &p) = delete;
    my_unique_ptr &operator=(my_unique_ptr &&p);
    T &operator*() const;
    T *operator->() const;
    template <typename _Base> operator my_unique_ptr<_Base, _Deleter>();
    operator bool() const;

    T *get() const;
    _Deleter &get_deleter();
    const _Deleter &get_deleter() const;
    T *release();
    void reset(T *p = 0);
private:
    T *m_pointer;
    _Deleter m_deleter;
};

template <typename T, typename _Deleter>
my_unique_ptr<T, _Deleter>::my_unique_ptr(T *t) 
    : m_pointer(t),
      m_deleter(default_deleter())
{

}

template <typename T, typename _Deleter>
my_unique_ptr<T, _Deleter>::my_unique_ptr(T *t, _Deleter deleter) 
    : m_pointer(t),
      m_deleter(deleter)
{

}

template <typename T, typename _Deleter>
my_unique_ptr<T, _Deleter>::my_unique_ptr(my_unique_ptr &&q)
    : m_pointer(q.m_pointer),
      m_deleter(q.m_deleter)
{
    q.m_pointer = 0x0;
}

template <typename T, typename _Deleter>
my_unique_ptr<T, _Deleter>::~my_unique_ptr() {
    m_deleter(m_pointer);
}


template <typename T, typename _Deleter>
my_unique_ptr<T, _Deleter> &my_unique_ptr<T, _Deleter>::operator=(my_unique_ptr &&p) {
    T *tmp = m_pointer;

    m_pointer = p.m_pointer;
    m_deleter = p.m_deleter;
    p.m_pointer = 0;
    
    m_deleter(tmp);

    return *this;
}

template <typename T, typename _Deleter>    
T &my_unique_ptr<T, _Deleter>::operator*() const {
    return *m_pointer;
}

template <typename T, typename _Deleter>
T *my_unique_ptr<T, _Deleter>::operator->() const {
    return m_pointer;
}

template <typename T, typename _Deleter>
template <typename _Base>
my_unique_ptr<T, _Deleter>::operator my_unique_ptr<_Base, _Deleter>() {
    T *tmp = m_pointer;
    m_pointer = 0;
    return my_unique_ptr<_Base, _Deleter>(tmp, m_deleter);
}

template <typename T, typename _Deleter>
my_unique_ptr<T, _Deleter>::operator bool() const {
    return m_pointer != 0x0;
    // return 1;
}

template <typename T, typename _Deleter>
T *my_unique_ptr<T, _Deleter>::get() const {
    return m_pointer;
}

template <typename T, typename _Deleter>
_Deleter &my_unique_ptr<T, _Deleter>::get_deleter() {
    return m_deleter;    
}

template <typename T, typename _Deleter>
const _Deleter &my_unique_ptr<T, _Deleter>::get_deleter() const {
    return m_deleter;    
}

template <typename T, typename _Deleter>
T *my_unique_ptr<T, _Deleter>::release() {
    T *res = m_pointer;
    m_pointer = 0;
    return res;
}

template <typename T, typename _Deleter>
void my_unique_ptr<T, _Deleter>::reset(T *p) {
    m_deleter(m_pointer);
    m_pointer = p;
}


template <typename T, typename... Args>
my_unique_ptr<T> make_my_unique(Args &&...args) {
    return my_unique_ptr<T>(new T(std::forward(args)...));
}

#endif // MY_UNIQUE_PTR_H
