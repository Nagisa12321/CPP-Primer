#ifndef _STR_BLOB_H_
#define _STR_BLOB_H_

#include <vector>
#include <memory>
#include <string>
#include <initializer_list>

class str_blob {
public:
    typedef std::vector<std::string>::size_type size_type;

    str_blob();
    str_blob(std::initializer_list<std::string> il);

    size_type size() const {
        return data->size();
    }
    bool empty() const {
        return data->empty();
    }
    void push_back(const std::string &s) {
        data->push_back(s);
    }

    std::string get(size_type idx) {
        return (*data)[idx];
    }

private:
    std::shared_ptr<std::vector<std::string>> data;
};

#endif // _STR_BLOB_H_