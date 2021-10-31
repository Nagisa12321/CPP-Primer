#include <cstring>
#include "String.h"
using namespace std;

allocator<char> String::alloc;
char String::nil;

String::String() :
    m_begin(&nil), m_end(&nil), m_capacity(&nil) {
}

String::String(const char *c_str) {
    size_type sz = 0;
    while (c_str[sz]) ++sz;
    copy_in(c_str, c_str + sz, sz);
}

String::String(const String &str) {
    cout << "copy constructor. " << endl;
    ++copy_times;
    size_type sz = str.size();
    copy_in(str.m_begin, str.m_end, sz);
}

String::String(const String &&str) noexcept {
    cout << "move constructor. " << endl;
    size_type sz = str.size();
    copy_in(str.m_begin, str.m_end, sz);
}

String::~String() {
    free();
}

String &String::operator=(const String &str) {
    cout << "copy operator. " << endl;
    if (&str == this) return *this;
    free();
    copy_in(str.m_begin, str.m_end, str.size());
    return *this;
}

char &String::operator[](size_type index) const {
    return m_begin[index];
}

bool String::operator==(const String &str) const {
    if (size() != str.size()) return false;
    for (size_type i = 0; i < str.size(); ++i)
        if (m_begin[i] != str[i])
            return false;
    return true;
}

void String::push_back(char c) {
    reallocate();
    *m_end++ = c;
}

String::iterator String::begin() {
    return m_begin;
}

String::iterator String::end() {
    return m_end;
}

String::size_type String::size() const {
    return m_end - m_begin;
}

String::size_type String::capacity() const {
    return m_capacity - m_begin;
}

void String::free() {
    if (m_begin != &nil)
        alloc.deallocate(m_begin, m_capacity - m_begin);
}

void String::copy_in(const char *o_begin, const char *o_end, size_type sz) {
    m_begin = alloc.allocate(sz * 2);
    m_end = m_begin + sz;
    m_capacity = m_begin + 2 * sz;

    copy(o_begin, o_end, m_begin);
}

void String::reallocate() {
    if (m_capacity == m_end) {
        size_type sz = size();

        char *new_begin = alloc.allocate(sz == 0 ? 1 : sz * 2);
        if (sz) {
            copy(m_begin, m_end, new_begin);
            alloc.deallocate(m_begin, sz);
            m_begin = new_begin;

            m_end = m_begin + sz;
            m_capacity = m_begin + 2 * sz;
        } else {
            m_begin = new_begin;
            m_end = m_begin;
            m_capacity = m_begin + 1;
        }
    }
}

ostream &operator<<(ostream &out, const String &s) {
    for (String::size_type i = 0; i < s.size(); ++i)
        out << s[i];
    return out;
}

istream &operator>>(istream &in, String &s) {
    char c;
    bool readed = false;
    while (in >> c) {
        if (c == ' ' || c == '\n') {
            if (readed)
                break;
            else
                continue;
        } else {
            s.push_back(c);
        }
    }
    return in;
}
