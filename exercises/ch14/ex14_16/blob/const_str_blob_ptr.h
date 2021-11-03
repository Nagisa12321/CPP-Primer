#ifndef CONST_STR_BLOB_PTR_H
#define CONST_STR_BLOB_PTR_H
#include "str_blob.h"

class str_blob;
class const_str_blob_ptr {
    friend bool operator==(const const_str_blob_ptr &, const const_str_blob_ptr &);
    friend bool operator!=(const const_str_blob_ptr &, const const_str_blob_ptr &);
public:
    const_str_blob_ptr(const str_blob &, size_t = 0);

    bool operator<(const const_str_blob_ptr &) const;
    const_str_blob_ptr &operator+=(size_t);
    const_str_blob_ptr &operator-=(size_t);
    const_str_blob_ptr operator+(size_t);
    const_str_blob_ptr operator-(size_t);
    const_str_blob_ptr &operator++();
    const_str_blob_ptr &operator--();
    const_str_blob_ptr operator++(int);
    const_str_blob_ptr operator--(int);
    const std::string &operator*() const;
    const std::string *operator->() const;
private:
    std::weak_ptr<std::vector<std::string>> m_w_ptr;
    size_t m_curr_index;
};

bool operator==(const const_str_blob_ptr &, const const_str_blob_ptr &);
bool operator!=(const const_str_blob_ptr &, const const_str_blob_ptr &);

#endif // CONST_STR_BLOB_PTR_H
