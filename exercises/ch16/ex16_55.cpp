#include "primer.h"
using namespace std;

template <typename T, typename... Args>
ostream &print(ostream &out, const T &t, const Args &...args) {
    out << t << ", ";
    return print(out, args...);
}

template <typename T>
ostream &print(ostream &out, const T &t) {
    out << t;
    return out;
}

int main() {
    /*
    ostream &print(ostream &out, const int &, const char (&)[12], const int &)
    ostream &print(ostream &out, const char (&)[12], const int &)
    ostream &print(ostream &out, const int &)

    not find the ostream &print(ostream &out) or ostream &print(ostream &out, Args... args)
    */
    print(cout, 10, "hello world", 1024);
    return 0;
}