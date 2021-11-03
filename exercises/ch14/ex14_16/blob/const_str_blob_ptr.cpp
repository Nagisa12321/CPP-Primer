#include "const_str_blob_ptr.h"
using namespace std;

bool operator==(const const_str_blob_ptr &ptr1, const const_str_blob_ptr &ptr2) {
    return ptr1.m_curr_index == ptr2.m_curr_index;
}

bool operator!=(const const_str_blob_ptr &ptr1, const const_str_blob_ptr &ptr2) {
    return !(ptr1 == ptr2);
}

const_str_blob_ptr::const_str_blob_ptr(const str_blob &blob, size_t index) :
    m_w_ptr(blob.m_svec),
    m_curr_index(index) {
}

bool const_str_blob_ptr::operator<(const const_str_blob_ptr &ptr) const {
    return m_curr_index < ptr.m_curr_index;
}

const_str_blob_ptr &const_str_blob_ptr::operator+=(size_t sz) {
    m_curr_index += sz;
    return *this;
}

const_str_blob_ptr &const_str_blob_ptr::operator-=(size_t sz) {
    m_curr_index -= sz;
    return *this;
}

const_str_blob_ptr const_str_blob_ptr::operator+(size_t sz) {
    const_str_blob_ptr ret = *this;
    ret += sz;
    return ret;
}

const_str_blob_ptr const_str_blob_ptr::operator-(size_t sz) {
    const_str_blob_ptr ret = *this;
    ret -= sz;
    return ret;
}

const_str_blob_ptr &const_str_blob_ptr::operator++() {
    ++m_curr_index;
    return *this;
}

const_str_blob_ptr &const_str_blob_ptr::operator--() {
    --m_curr_index;
    return *this;
}

const_str_blob_ptr const_str_blob_ptr::operator++(int) {
    const_str_blob_ptr ret = *this;
    ++m_curr_index;
    return ret;
}

const_str_blob_ptr const_str_blob_ptr::operator--(int) {
    const_str_blob_ptr ret = *this;
    --m_curr_index;
    return ret;
}

const std::string &const_str_blob_ptr::operator*() const {
    return (*m_w_ptr.lock())[m_curr_index];
}

const std::string *const_str_blob_ptr::operator->() const {
    return &(**this);
}