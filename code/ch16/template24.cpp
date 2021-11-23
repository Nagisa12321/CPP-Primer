#include "primer.h"
using namespace std;

template <typename T> void f3(T &&val) {
/*
    typedef typename add_rvalue_reference<decltype(val)>::type T_type;
    T_type t = val;
    t = 1024;
*/

    T t = val;
    t = 1024;
}

int main() {
    int i = 42;
    cout << i << endl;
    f3(i);
    cout << i << endl;

    return 0;
}