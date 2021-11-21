#ifndef BLOB_H
#define BLOB_H
#include <memory>
#include <vector>
#include "blob_ptr.h"

template <typename T> class blob_ptr;
template <typename T> class blob;
template <typename T> 
bool operator==(const blob<T> b1, const blob<T> b2);

template <typename T> class blob {
    friend class blob_ptr<T>;
    friend bool operator==<T>(const blob<T> b1, const blob<T> b2);

public:
    typedef typename std::vector<T>::size_type size_type;
    typedef blob_ptr<T> iterator;
    blob();
    blob(std::initializer_list<T> li);
    template <typename InputIterator> blob(InputIterator iter1, InputIterator iter2);

    void push_back(const T &t);
    void push_back(T &&t);
    void pop_back();

    T &back();
    T &operator[](size_type index);
    const T &operator[](size_type index) const;

    iterator begin();
    iterator end();

    bool empty() const;
    size_type size() const;
private:
    std::shared_ptr<std::vector<T>> m_vector;
};

template <typename T>
blob<T>::blob() 
    : m_vector(std::make_shared<std::vector<T>>())
{

}

template <typename T>
blob<T>::blob(std::initializer_list<T> li) 
    : m_vector(std::make_shared<std::vector<T>>(li))
{

}

template <typename T>
template <typename InputIterator>
inline blob<T>::blob(InputIterator iter1, InputIterator iter2)
    : m_vector(std::make_shared<std::vector<T>>(iter1, iter2))
{
    
}

template <typename T>
void blob<T>::push_back(const T &t) {
    m_vector->push_back(t);
}

template <typename T>
void blob<T>::push_back(T &&t) {
    m_vector->push_back(std::move(t));
}

template <typename T>
void blob<T>::pop_back() {
    m_vector->pop_back();
}

template <typename T>
T &blob<T>::back() {
    return m_vector->back();
}

template <typename T>
T &blob<T>::operator[](size_type index) {
    return (*m_vector)[index];
}

template <typename T>
const T &blob<T>::operator[](size_type index) const {
    return (*m_vector)[index];
}

template <typename T>  
typename blob<T>::iterator blob<T>::begin() {
    return blob_ptr<T>(*this, 0);
}

template <typename T>
typename blob<T>::iterator blob<T>::end() {
    return blob_ptr<T>(*this, size());
}


template <typename T>
bool blob<T>::empty() const {
    return m_vector->empty();    
}

template <typename T>
typename blob<T>::size_type blob<T>::size() const {
    return m_vector->size();
}

#endif // BLOB_H
