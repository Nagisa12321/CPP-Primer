#ifndef BLOB_PTR_H
#define BLOB_PTR_H
#include "blob.h"

template <typename T> class blob;
template <typename T> class blob_ptr;
template <typename T>
bool operator==(const blob_ptr<T> &b1, const blob_ptr<T> &p2);

template <typename T> class blob_ptr {
    friend bool operator==<T>(const blob_ptr<T> &b1, const blob_ptr<T> &p2);
public:
    blob_ptr();
    blob_ptr(const blob<T> &a, size_t sz);

    T &operator*();
    blob_ptr &operator++();
    blob_ptr operator++(int);
    blob_ptr &operator--();
    blob_ptr operator--(int);
private:
    std::weak_ptr<std::vector<T>> m_wptr;
    std::size_t m_curr_index;
};

template <typename T>
bool operator==(const blob_ptr<T> &b1, const blob_ptr<T> &b2) {
    return b1.m_curr_index == b2.m_curr_index;
}

template <typename T>
bool operator!=(const blob_ptr<T> &b1, const blob_ptr<T> &b2) {
    return !(b1 == b2);
}

template <typename T>
blob_ptr<T>::blob_ptr()
    : m_wptr(),
      m_curr_index(0)
{
    
}

template <typename T>
blob_ptr<T>::blob_ptr(const blob<T> &a, size_t sz)
    : m_wptr(a.m_vector),
      m_curr_index(sz)
{
    
}

template <typename T>
T &blob_ptr<T>::operator*() {
    return (*m_wptr.lock())[m_curr_index];
}

template <typename T>
blob_ptr<T> &blob_ptr<T>::operator++() {
    ++m_curr_index;
    return *this;
}

template <typename T>
blob_ptr<T> blob_ptr<T>::operator++(int) {
    blob_ptr res = *this;
    ++*this;
    return res;
}

template <typename T>
blob_ptr<T> blob_ptr<T>::operator--(int) {
    blob_ptr res = *this;
    --*this;
    return res;
}

template <typename T>
blob_ptr<T> &blob_ptr<T>::operator--() {
    --m_curr_index;
    return *this;
}

#endif // BLOB_PTR_H
