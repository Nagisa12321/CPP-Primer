#include "primer.h"
using namespace std;

class Foo {
public:
    Foo(int val) : p(new int(val)) {}
    Foo(const Foo &foo) : p(new int(*foo.p)) {}
    ~Foo() { cout << "Foo destructor. " << endl; delete p; }

    int *p;
};

bool fcn(const Foo *foo1, Foo foo2) {
    Foo item1(*foo1), item2(foo2);
    return *item1.p != *item2.p;
}

int main() {
    Foo *foo1 = new Foo(123);
    Foo foo2(456);
    cout << "---" << endl;
    fcn(foo1, foo2);    // 3 times
    cout << "---" << endl; 
    return 0;
}