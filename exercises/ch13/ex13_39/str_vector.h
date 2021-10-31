#ifndef _STR_VECTOR_H
#define _STR_VECTOR_H

#include <string>
#include <memory>

class str_vector {

public:
    typedef size_t size_type;
    str_vector();
    str_vector(const str_vector &);
    ~str_vector();

    str_vector &operator=(const str_vector &);

    std::string *begin() const;
    std::string *end() const;
    size_type size() const;
    size_type capacity() const;
    void push_back(const std::string &);
    
private:
    static std::allocator<std::string>  alloc;
    static std::string                  s_nil;
    std::string     *m_elements;
    std::string     *m_first_free;
    std::string     *m_cap;

    void free();
    void check_n_alloc();
    void reallocate(std::string *, size_type);
};

#endif // _STR_VECTOR_H