#include "primer.h"
using namespace std;

class Foo {
public:
    Foo() = default;
    Foo(const Foo &) = default;
    ~Foo() = default;

    Foo &operator=(const Foo &) = default;
};

int main() {
    Foo foo;
    return 0;
}