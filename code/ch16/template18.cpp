#include "primer.h"
using namespace std;

template <typename T> T fobj(T, T) {
    cout << "template <typename T> T fobj(T, T)" << endl;
    return T();
}

template <typename T> T fref(const T &, const T &) {
    cout << "template <typename T> T fref(const T &, const T &)" << endl;
    return T();
}

int main() {
    string s1("a value");
    const string s2("another value");
    fobj(s1, s2);
    fref(s1, s2);

    int a[10], b[42];
    fobj(a, b); // fobj(int *, int *)
    // fref(a, b); // this is a ref of the array
    return 0;
}