#ifndef _STR_BLOB_H_
#define _STR_BLOB_H_
#include <memory>
#include <vector>
#include <string>
#include "str_blob_ptr.h"

class str_blob_ptr;
class str_blob {
    friend bool operator==(const str_blob &, const str_blob &);
    friend bool operator!=(const str_blob &, const str_blob &);
    friend class str_blob_ptr;

public:
    typedef str_blob_ptr iterator;
    str_blob();
    str_blob(std::initializer_list<std::string>);

    std::string &operator[](size_t);
    const std::string &operator[](size_t) const;
    bool operator<(const str_blob &) const;

    void push_back(const std::string &);
    size_t size();
    iterator begin();
    iterator end();
private:
    std::shared_ptr<std::vector<std::string>> m_svec;
};

bool operator==(const str_blob &, const str_blob &);
bool operator!=(const str_blob &, const str_blob &);

#endif