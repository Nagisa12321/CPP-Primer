#include "primer.h"
using namespace std;

template <typename T> struct Foo {
    Foo(const T &t = T()) : mem(t) {}
    void Bar();
    T mem;
};

int main() {
    
    return 0;
}