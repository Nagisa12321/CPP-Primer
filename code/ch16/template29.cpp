#include "primer.h"
using namespace std;

template <typename T, typename... Args>
void foo(const T &t, const Args& ...rest) {
    
}

int main() {
    int i = 0; double d = 3.14; string s = "how now brown cow.";
    // void foo(const int &i, const string &s, const int &i, const double &d)
    foo(i, s, 42, d);
    // void foo(const string &, const int &, const char (&)[3])
    foo(s, 42, "hi");
    // void foo(const double &, const string &)
    foo(d, s);
    // void foo(const char (&)[3])
    foo("hi");
    return 0;
}