#include "primer.h"
using namespace std;

template <typename T> void f(T)         { printf("template <typename T> void f(T)\n"); }
template <typename T> void f(const T *) { printf("template <typename T> void f(const T *)\n"); }
template <typename T> void g(T)         { printf("template <typename T> void g(T)\n"); }
template <typename T> void g(T *)       { printf("template <typename T> void g(T *)\n"); }
int main() {
    int i = 42, *p = &i;
    const int ci = 0, *p2 = &ci;
    g(42);
    f(42);
    g(p);
    f(p);
    g(ci);
    f(ci);
    g(p2);
    f(p2);
    return 0;
}