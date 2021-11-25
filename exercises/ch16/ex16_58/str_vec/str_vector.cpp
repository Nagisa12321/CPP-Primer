#include "primer.h"
#include "str_vector.h"
using namespace std;

allocator<string> str_vector::alloc;
string str_vector::s_nil;

str_vector::str_vector() :
    m_elements(&s_nil), m_first_free(&s_nil), m_cap(&s_nil) {
    cout << "default constructor. " << endl; 
}

str_vector::str_vector(initializer_list<string> li) : str_vector() {
    for(const string &str : li)
        push_back(str);
}


str_vector::str_vector(const str_vector &vec) {
    cout << "copy constructor. " << endl; 
    reallocate(vec.m_elements, vec.size());
}

str_vector::str_vector(str_vector &&vec) noexcept : 
    m_elements(vec.m_elements), m_first_free(vec.m_first_free), m_cap(vec.m_cap) {
        cout << "move constructor. " << endl; 
        vec.m_first_free = vec.m_cap = vec.m_elements = 0;
}

void str_vector::push_back(const string &s) {
    cout << "push_back(const string &)" << endl;
    check_n_alloc();
    alloc.construct(m_first_free++, s);
}

void str_vector::push_back(string &&s) {
    cout << "push_back(string &&)" << endl;
    check_n_alloc();
    alloc.construct(m_first_free++, std::move(s));
}

template <typename... Args> void str_vector::emplace_back(Args &&...args) {
    check_n_alloc();
    alloc.construct(m_first_free++, std::forward<Args>(args)...);
}

str_vector &str_vector::operator=(const str_vector &vec) {
    free();
    reallocate(vec.m_elements, vec.size());
    return *this;
}

str_vector &str_vector::operator=(str_vector &&vec) noexcept {
    cout << "move operator. " << endl; 
    if (&vec == this) return *this;
    free();

    m_elements = vec.m_elements;
    m_cap = vec.m_cap;
    m_first_free = vec.m_first_free;

    vec.m_first_free = vec.m_cap = vec.m_elements = 0;
    return *this;
}

string &str_vector::operator[](str_vector::size_type index) {
    return const_cast<string &>(static_cast<const str_vector &>(*this)[index]);
}

const string &str_vector::operator[](str_vector::size_type index) const {
    return m_elements[index];
}

std::string *str_vector::begin() const {
    return m_elements;
}

std::string *str_vector::end() const {
    return m_first_free;
}

str_vector::size_type str_vector::size() const {
    return m_first_free - m_elements;
}

str_vector::size_type str_vector::capacity() const {
    return m_cap - m_elements;
}

void str_vector::reallocate(string *s, str_vector::size_type sz) {
    if (s == &s_nil) {
        m_elements = m_first_free = m_cap = &s_nil;
    } else {
        m_elements = alloc.allocate(sz * 2);

        // copy the memory
        uninitialized_copy_n(s, sz, m_elements);

        m_cap = m_elements + 2 * sz;
        m_first_free = m_elements + sz;
    }
}

void str_vector::check_n_alloc() {
    if (m_first_free == m_cap) {
        if (m_elements == &s_nil) {
            m_elements = m_first_free = alloc.allocate(1);
            m_cap = m_elements + 1;
        } else {
            size_type sz = m_cap - m_elements;
            string *new_elements = alloc.allocate(sz * 2);

            // copy the memory
            for (int i = 0; i < sz; ++i)
                alloc.construct(new_elements + i, move(m_elements[i]));

            // free the memory
            free();

            // copy the pointer
            m_elements = new_elements;
            m_cap = m_elements + 2 * sz;
            m_first_free = m_elements + sz;
        }
    }
}

void str_vector::free() {
    if (m_elements != &s_nil) {
        for (string *p = m_first_free; p != m_elements; )
            alloc.destroy(--p);
        alloc.deallocate(m_elements, m_cap - m_elements);
    }
}

str_vector::~str_vector() {
    free();
}

str_vector get_vector() {
    str_vector vec;
    vec.push_back("a");
    vec.push_back("b");
    vec.push_back("c");
    return move(vec);
}

int main() {
    str_vector svec;
    for (int i = 0; i < 10; ++i) {
        svec.emplace_back(i, 'a');
    }
    primer_show(svec);
}