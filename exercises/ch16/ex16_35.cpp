#include "primer.h"
using namespace std;

template <typename T> T calc(T, int) {
    const char *type_name = typeid(T).name();
    printf("%s calc(%s, int) is called \n", type_name, type_name);
    return T();
}

template <typename T> T fcn(T, T) {
    const char *type_name = typeid(T).name();
    printf("%s fnc(%s, %s) is called \n", type_name, type_name, type_name);
    return T();
}

int main() {
    double d; float f; char c;
    // a
    calc(c, 'c');   // template <char> char calc(c, 'c')
    // b
    calc(d, f);     // template <double> double calc(d, f)
    // c
    fcn(c, 'c');    // template <char> char fcn(c, 'c')
    // d
    // fcn(d, f);      // error
    return 0;
}