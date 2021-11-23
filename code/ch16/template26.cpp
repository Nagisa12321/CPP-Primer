#include "primer.h"
using namespace std;

template <typename T> void foo(T t1, T t2) {
    const char *type_name = typeid(T).name();
    cout << type_name << endl;
    t1 = 1;
    t2 = 1;
}

template <typename T> void foo(T t) {
    const char *type_name = typeid(T).name();
    cout << type_name << endl;
    t = 1;
}

int main() {
    const int ci = 1024;
    int i = 42;
    foo(ci, i);
    foo(i, ci);
    foo(i);
    foo(ci);
    return 0;
}