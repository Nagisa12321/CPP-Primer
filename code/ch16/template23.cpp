#include "primer.h"
using namespace std;

// template <typename T> void foo(T &&t) {
//     const char *type_name = typeid(T).name();
//     cout << type_name << endl;
// }

template <typename T> void foo(T &t) {
    const char *type_name = typeid(T).name();
    cout << type_name << endl;
}

int main() {
    int i = 42;
    int ci = 1024;
    foo(ci);
    foo(i);
    return 0;
}