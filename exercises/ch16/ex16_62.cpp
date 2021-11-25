#include "primer.h"
using namespace std;

class sales_data {
    friend class hash<sales_data>;
    friend bool operator==(const sales_data &s1, const sales_data &s2);
    friend ostream &operator<<(ostream &out, const sales_data &s);

public:
    sales_data(const string &s) : m_book_no(s) {}

private:
    string m_book_no;
};

namespace std {
template <>
class hash<sales_data> {
public:
    size_t operator()(const sales_data &s) const { 
        return hash<string>()(s.m_book_no); 
    }
};
}

bool operator==(const sales_data &s1, const sales_data &s2) { 
    return s1.m_book_no == s2.m_book_no;    
}

ostream &operator<<(ostream &out, const sales_data &s) {
    return out << s.m_book_no;
}

int main() {
    unordered_multiset<sales_data> set;
    for (int i = 0; i < 10; ++i) {
        set.insert(sales_data(to_string(i)));
    }

    for (const sales_data &s : set)
        cout << s << endl;
    return 0;
}