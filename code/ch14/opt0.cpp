#include "primer.h"
using namespace std;

class Foo {

    Foo &operator+=(const Foo &) { cout << "member operator+= " << endl; }
};

Foo &operator+(Foo &f, const Foo &) { cout << "opterator+" << endl; return f; }
Foo &operator+=(Foo &f, const Foo &) { cout << "opterator+=" << endl; return f; }

int main() {
    Foo foo0, foo1;
    foo0 + foo1;
    // foo0 += foo1;
    return 0;
}