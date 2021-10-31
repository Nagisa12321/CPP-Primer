#include "../primer.h"
#include "str_vector.h"
using namespace std;

allocator<string> str_vector::alloc;
string str_vector::s_nil;

str_vector::str_vector() :
    m_elements(&s_nil), m_first_free(&s_nil), m_cap(&s_nil) {
}


str_vector::str_vector(const str_vector &vec) {
    reallocate(vec.m_elements, vec.size());
}

void str_vector::push_back(const string &s) {
    check_n_alloc();
    alloc.construct(m_first_free++, s);
}

str_vector &str_vector::operator=(const str_vector &vec) {
    free();
    reallocate(vec.m_elements, vec.size());
    return *this;
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

std::string &str_vector::operator[](size_type idx) {
    return m_elements[idx];
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
        for_each(m_elements, m_first_free, [&](const string &s){ alloc.destroy(&s); });
        // for (string *p = m_first_free; p != m_elements; )
        //     alloc.destroy(--p);
        alloc.deallocate(m_elements, m_cap - m_elements);
    }
}

str_vector::~str_vector() {
    free();
}

// int main() {
//     cout << " ...." << endl; 
//     str_vector vec;
//     for (int i = 0; i < 100; ++i) {
//         vec.push_back("a");
//         cout << vec.size() << ", " << vec.capacity() << endl;
//     }

//     str_vector copy(vec);
//     cout << "copy.size(): " << copy.size() 
//          << ", copy.capacity(): " << copy.capacity() 
//          << endl;
//     cout << " ...." << endl; 
//     str_vector vec1;
//     vec1.push_back("a");
//     vec1.push_back("b");
//     vec1.push_back("c");
//     for (string *it = vec1.begin(); it != vec1.end(); ++it)
//         cout << *it << endl;
//     str_vector vec2(vec1);
//     vec2.push_back("d");
//     cout << " .." << endl;
//     for (string *it = vec1.begin(); it != vec1.end(); ++it)
//         cout << *it << endl;
//     cout << " .." << endl;
//     for (string *it = vec2.begin(); it != vec2.end(); ++it)
//         cout << *it << endl;
//     cout << " ...." << endl; 
//     return 0;
// }