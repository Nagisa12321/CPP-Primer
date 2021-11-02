#ifndef _STR_VECTOR_H
#define _STR_VECTOR_H

#include <string>
#include <memory>

class str_vector {
    friend bool operator==(const str_vector &, const str_vector &);
    friend bool operator!=(const str_vector &, const str_vector &);
public:
    typedef size_t size_type;
    str_vector();
    str_vector(const str_vector &);
    ~str_vector();

    str_vector &operator=(const str_vector &);
    str_vector &operator=(std::initializer_list<std::string>);
    bool operator<(const str_vector &) const;
    const std::string &operator[](size_type) const;
    std::string &operator[](size_type);

    std::string *begin() const;
    std::string *end() const;
    size_type size() const;
    size_type capacity() const;
    void push_back(const std::string &);
    void push_back(std::string &&);
    
private:
    static std::allocator<std::string>  alloc;
    static std::string                  s_nil;
    std::string     *m_elements;
    std::string     *m_first_free;
    std::string     *m_cap;

    void free();
    void check_n_alloc();
    void reallocate(const std::string *, size_type);
};

bool operator==(const str_vector &, const str_vector &);
bool operator!=(const str_vector &, const str_vector &);

#endif // _STR_VECTOR_H