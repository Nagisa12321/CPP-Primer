#ifndef _STR_BLOB_PTR_H_
#define _STR_BLOB_PTR_H_

#include <memory>
#include <vector>
#include <string>
#include "str_blob.h"

class str_blob;
class str_blob_ptr {
    friend bool operator==(const str_blob_ptr &, const str_blob_ptr &);
    friend bool operator!=(const str_blob_ptr &, const str_blob_ptr &);
public:
    str_blob_ptr(const str_blob &, size_t = 0);

    bool operator<(const str_blob_ptr &) const;
    str_blob_ptr &operator+=(size_t);
    str_blob_ptr &operator-=(size_t);
    str_blob_ptr operator+(size_t);
    str_blob_ptr operator-(size_t);
    str_blob_ptr &operator++();
    str_blob_ptr &operator--();
    str_blob_ptr operator++(int);
    str_blob_ptr operator--(int);
    std::string &operator*();
private:
    std::weak_ptr<std::vector<std::string>> m_w_ptr;
    size_t m_curr_index;
};

bool operator==(const str_blob_ptr &, const str_blob_ptr &);
bool operator!=(const str_blob_ptr &, const str_blob_ptr &);

#endif