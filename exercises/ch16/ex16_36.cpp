#include "primer.h"
using namespace std;

template <typename T> void f1(T, T) {
    const char *type_name = typeid(T).name();
    printf("f1, T -> %s\n", type_name);
}

template <typename T1, typename T2> void f2(T1, T2) {
    const char *type_name1 = typeid(T1).name();
    const char *type_name2 = typeid(T2).name();
    printf("f2, T1 -> %s, T2 -> %s\n", type_name1, type_name2);
}

int main() {
    int i = 0, j = 42, *p1 = &i, *p2 = &j;
    const int *cp1 = &i, *cp2 = &j;
    // a
    f1(p1, p2);     // T -> int *
    // b
    f2(p1, p2);     // T1 -> int *, T2 -> int *
    // c 
    f1(cp1, cp2);   // T -> const int *
    // d
    f2(cp1, cp2);   // T1 -> const int *, T2 -> const int *
    // e
    // f1(p1, cp1);    // T -> const int *
    // f
    f2(p1, cp1);    // T1 -> int *, T2 -> const int *
    return 0;
}