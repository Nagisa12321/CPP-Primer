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

int main() {
    print(cout, 1, "hello", 0.24);
    return 0;
}