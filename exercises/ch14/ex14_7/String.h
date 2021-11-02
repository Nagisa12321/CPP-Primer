#ifndef _STRING_H_
#define _STRING_H_
#include <memory>
#include <iostream>

class String {
    friend std::ostream &operator<<(std::ostream &, const String &);
    friend std::istream &operator>>(std::istream &, const String &);

public:
    typedef size_t size_type;
    typedef char *iterator;

    String();
    String(const char *);
    String(const String &);
    ~String();

    String &operator=(const String &);
    char &operator[](size_type) const;
    bool operator==(const String &) const;

    void push_back(char);
    iterator begin();
    iterator end();
    size_type size() const;
    size_type capacity() const;

private:
    static std::allocator<char> alloc;
    static char nil;
    char *m_begin;
    char *m_end;
    char *m_capacity;

    void free();
    void copy_in(const char *, const char *, size_type);
    void reallocate();
};

std::ostream &operator<<(std::ostream &, const String &);
std::istream &operator>>(std::istream &, const String &);

#endif