#include "primer.h"
using namespace std;

class print_string {
public:
    print_string(ostream &os, char sep) :
        m_os(os),
        m_sep(sep) {}
    
    void operator()(const string &s) {
        m_os << s << m_sep;
    }
private:
    ostream &m_os;
    char m_sep;
};

int main() {
    print_string ps(cout, ' ');
    ps("hi");
    ps("hello");
    ps("world");

    vector<string> svec{"a", "an", "the"};
    for_each(svec.begin(), svec.end(), ps);
    return 0;
}