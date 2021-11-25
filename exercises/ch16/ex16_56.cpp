#include "primer.h"
using namespace std;

template <typename T, typename... Args> ostream &print(ostream &out, const T &t, const Args &...rest);
template <typename T> ostream &print(ostream &out, const T &t);

template <typename T, typename... Args> 
ostream &print(ostream &out, const T &t, const Args &...rest) {
    out << t << ", ";
    return print(out, rest...);
}

template <typename T>
ostream &print(ostream &out, const T &t) {
    out << t;
    return out;
}

template <typename... Args>
ostream &errorMsg(ostream &out, const Args &...rest) {
    print(out, primer_debug(rest)...);
    return out;
}


int main() {
    int i = 42, *pi = &i, *pn = 0;
    errorMsg(cout, i, pi, pn) << endl;
    return 0;
}