#include "str_blob_ptr.h"
using namespace std;
str_blob_ptr::str_blob_ptr(const str_blob &blob, size_t index) :
    m_w_ptr(blob.m_svec), m_curr_index(index) {
}

bool operator==(const str_blob_ptr &ptr1, const str_blob_ptr &ptr2) {
    return ptr1.m_curr_index == ptr2.m_curr_index;
}

bool operator!=(const str_blob_ptr &ptr1, const str_blob_ptr &ptr2) {
    return !(ptr1 == ptr2);
}

bool str_blob_ptr::operator<(const str_blob_ptr &ptr) const {
    return m_curr_index < ptr.m_curr_index;
}

str_blob_ptr &str_blob_ptr::operator++() {
    ++m_curr_index;
    return *this;
}

str_blob_ptr &str_blob_ptr::operator--() {
    --m_curr_index;
    return *this;
}

str_blob_ptr str_blob_ptr::operator++(int) {
    str_blob_ptr ret = *this;
    ++*this;
    return ret;
}

str_blob_ptr str_blob_ptr::operator--(int) {
    str_blob_ptr ret = *this;
    --*this;
    return ret;
}

str_blob_ptr &str_blob_ptr::operator+=(size_t sz) {
    m_curr_index += sz;
    return *this;
}

str_blob_ptr &str_blob_ptr::operator-=(size_t sz) {
    m_curr_index -= sz;
    return *this;
}

str_blob_ptr str_blob_ptr::operator+(size_t sz) {
    str_blob_ptr ret = *this;
    ret += sz;
    return ret;
}

str_blob_ptr str_blob_ptr::operator-(size_t sz) {
    str_blob_ptr ret = *this;
    ret -= sz;
    return ret;
}

string &str_blob_ptr::operator*() const {
    return (*m_w_ptr.lock())[m_curr_index];
}

string *str_blob_ptr::operator->() const {
    return &(**this);
}
