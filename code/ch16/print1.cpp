#include "primer.h"
using namespace std;

template <typename T>
ostream &print(ostream &out, const T &t) {
    out << t;
    return out;
}

template <typename T, typename... Args>
ostream &print(ostream &out, const T &t, const Args &...args) {
    out << t << ", ";
    return print(out, args...);
}

template <typename... Args> 
ostream &errorMsg(ostream &os, const Args &...rest) {
    return print(os, primer_debug(rest)...);
}

int main() {
    int i = 42;
    errorMsg(cout, 1, 1.0, "hello", &i) << endl;
    return 0;
}