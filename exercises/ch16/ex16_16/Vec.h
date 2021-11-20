#ifndef VEC_H
#define VEC_H
#include <memory>

template <typename T>
class Vec {
public:
    Vec();
    Vec(const Vec &v);
    Vec(Vec &&v);
    ~Vec();

    Vec &operator=(const Vec &v);
    Vec &operator=(Vec &&v);
    const T &operator[](size_t index) const;
    T &operator[](size_t index);

    void push_back(const T &t);
    void push_back(T &&t);
    void pop_back();
    T *begin();
    T *end();
    const T *cbegin() const;
    const T *cend() const;
    bool empty() const;
    size_t size() const;
    size_t capacity() const;

private:
    static std::allocator<T> alloc;
    T *m_begin;
    T *m_first_free;
    T *m_cap;

    void resize();
    void copy_in(const Vec &v);
    void destory();
};

template <typename T> std::allocator<T> Vec<T>::alloc;

template <typename T>
Vec<T>::Vec()
    : m_begin(0),
      m_first_free(0),
      m_cap(0)
{
    
}

template <typename T>
Vec<T>::Vec(const Vec &v)
{
    copy_in(v);
}

template <typename T>
Vec<T>::Vec(Vec &&v)
    : m_begin(v.m_begin),
      m_first_free(v.m_first_free),
      m_cap(v.m_cap)
{
    v.m_begin = v.m_cap = v.m_first_free = 0;
}

template <typename T>
Vec<T>::~Vec<T>() {
    destory();
}

template <typename T>
Vec<T> &Vec<T>::operator=(const Vec<T> &v) {
    if (&v == this) return *this;
    destory();
    copy_in(v);
    return *this;
}

template <typename T>
Vec<T> &Vec<T>::operator=(Vec<T> &&v) {
    destory();
    m_begin = v.m_begin;
    m_cap = v.m_cap;
    m_first_free = v.m_first_free;
    v.m_first_free = v.m_cap = v.m_begin = 0;
    return *this;
}

template <typename T>
const T &Vec<T>::operator[](size_t index) const {
    return m_begin[index];
}

template <typename T>
T &Vec<T>::operator[](size_t index) {
    return m_begin[index];
}

template <typename T>
void Vec<T>::push_back(const T &t) {
    resize();
    alloc.construct(m_first_free++, t);
}

template <typename T>
void Vec<T>::push_back(T &&t) {
    resize();
    alloc.construct(m_first_free++, std::move(t));
}

template <typename T>
T *Vec<T>::begin() {
    return m_begin;
}

template <typename T>
T *Vec<T>::end() {
    return m_first_free;
}

template <typename T>
const T *Vec<T>::cbegin() const {
    return m_begin;
}

template <typename T>
const T *Vec<T>::cend() const {
    return m_first_free;
}

template <typename T>
bool Vec<T>::empty() const {
    return m_first_free == m_begin;
}

template <typename T>
inline size_t Vec<T>::size() const {
    return m_first_free - m_begin;
}

template <typename T>
inline size_t Vec<T>::capacity() const {
    return m_cap - m_begin;
}

template <typename T>
void Vec<T>::resize() {
    if (m_first_free == m_cap) {
        if (size() == 0) {
            m_begin = alloc.allocate(1);
            m_first_free = m_begin;
            m_cap = m_begin + 1;
        } else {
            int sz = size();
            T *new_begin = alloc.allocate(2 * sz);
            std::uninitialized_copy_n(m_begin, sz, new_begin);
            destory();
            m_begin = new_begin;
            m_first_free = new_begin + sz;
            m_cap = new_begin + 2 * sz;
        }
    }    
}

template <typename T>
void Vec<T>::copy_in(const Vec<T> &v) {
    int cap = v.m_cap - v.m_begin;
    int sz = v.m_first_free - v.m_begin;
    m_begin = alloc.allocate(cap);
    std::uninitialized_copy_n(v.m_begin, sz, m_begin);

    m_first_free = m_begin + sz;
    m_cap = m_begin + cap;
}

template <typename T>
void Vec<T>::destory() {
    if (size()) {
        for (int i = 0; i < size(); ++i)
            alloc.destroy(m_begin + i);
        alloc.deallocate(m_begin, capacity());
    }
}

#endif // VEC_H 
