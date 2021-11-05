#include "primer.h"
using namespace std;

class Foo {
public:
    Foo &operator+(const Foo &) { return *this; }
};

Foo &operator+(Foo &foo1, const Foo &) { return foo1; }

int main() {
    Foo foo1, foo2;
    foo1 + foo2;
    return 0;
}