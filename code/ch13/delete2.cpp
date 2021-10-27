#include "primer.h"
using namespace std;

class Foo1 {
public:
    Foo1() = default;
    ~Foo1() = delete;
};

class Foo2 {
public:
    Foo2() {}
    Foo1 foo1;
};

struct Foo3 {
    const int val;
};

int main() {
    Foo2 *foo2 = new Foo2;
    // delete foo2;
    return 0;

}