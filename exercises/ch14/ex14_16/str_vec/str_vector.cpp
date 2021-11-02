#include "../../primer.h"
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

void str_vector::push_back(string &&s) {
    check_n_alloc();
    alloc.construct(m_first_free++, std::move(s));
}

str_vector &str_vector::operator=(const str_vector &vec) {
    free();
    reallocate(vec.m_elements, vec.size());
    return *this;
}

str_vector &str_vector::operator=(std::initializer_list<std::string> li) {
    free();
    reallocate(li.begin(), li.size());
    return *this;
}

bool str_vector::operator<(const str_vector &vec) const {
    for (size_type i = 0; i < size() || i < vec.size(); ++i) {
        if (i == size()) return true;
        if (i == vec.size()) return false;
        if (this->m_elements[i] != vec.m_elements[i]) {
            return this->m_elements[i] < vec.m_elements[i];
        }
    }
    return false;
}

const string &str_vector::operator[](str_vector::size_type index) const {
    cout << "const operator[]" << endl;
    return m_elements[index];
}

string &str_vector::operator[](str_vector::size_type index) {
    cout << "operator[]" << endl;
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

void str_vector::reallocate(const string *s, str_vector::size_type sz) {
    if (s == &s_nil || !s) {
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
        for (string *p = m_first_free; p != m_elements;)
            alloc.destroy(--p);
        alloc.deallocate(m_elements, m_cap - m_elements);
    }
}

str_vector::~str_vector() {
    free();
}

bool operator==(const str_vector &vec1, const str_vector &vec2) {
    if (vec1.size() != vec2.size()) return false;
    string *it1 = vec1.m_elements, *it2 = vec2.m_elements;
    while (it1 != vec1.m_first_free)
        if (*it1++ != *it2++)
            return false;
    return true;
}

bool operator!=(const str_vector &vec1, const str_vector &vec2) {
    return !(vec1 == vec2);
}

int main() {
    str_vector vec1, vec2;
    cout << "test 1 start: " << endl;
    cout << (vec1 == vec2) << endl;
    vec1.push_back("hello");
    vec2.push_back("hello");
    cout << (vec1 == vec2) << endl;
    vec1.push_back("hi");
    vec2.push_back("hello");
    cout << (vec1 == vec2) << endl;

    cout << "test 2 start: " << endl;
    str_vector v1, v2;
    v1.push_back("hi");
    v1.push_back("a");
    v2.push_back("hi");
    v2.push_back("b");

    cout << (v1 < v2) << endl;
    cout << (v2 < v1) << endl;

    cout << "test 3 start: " << endl;
    str_vector v3;
    v3 = {"a", "b", "c"};
    v3 = {"d", "e", "f"};
    v3 = {};

    cout << "test 4 start: " << endl;
    str_vector v4;
    const str_vector v5;
    v4[0], v5[0];

    return 0;
}