#include "str_blob.h"
using namespace std;

str_blob::str_blob() :
    m_svec(make_shared<vector<string>>()) {
}

str_blob::str_blob(std::initializer_list<std::string> li) :
    m_svec(make_shared<vector<string>>(li)) {
}

void str_blob::push_back(const std::string &s) {
    m_svec->push_back(s);
}

bool operator==(const str_blob &blob1, const str_blob &blob2) {
    return *blob1.m_svec == *blob2.m_svec;
}

bool operator!=(const str_blob &blob1, const str_blob &blob2) {
    return !(blob1 == blob2);
}

size_t str_blob::size() const {
    return m_svec->size();    
}

string &str_blob::operator[](size_t index) {
    return (*m_svec)[index];    
}

const string &str_blob::operator[](size_t index) const {
    return (*m_svec)[index];    
}

bool str_blob::operator<(const str_blob &blob) const {
    return *m_svec < *blob.m_svec;
}


str_blob::iterator str_blob::begin() {
    return str_blob_ptr(*this);
}

str_blob::iterator str_blob::end() {
    return str_blob_ptr(*this, size());
}

str_blob::const_iterator str_blob::cbegin() const {
    return const_str_blob_ptr(*this, 0);
}

str_blob::const_iterator str_blob::cend() const {
    return const_str_blob_ptr(*this, size());
}
