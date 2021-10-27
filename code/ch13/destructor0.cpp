#include "primer.h"
using namespace std;

class Foo1 {
public:
    Foo1() { cout << "Foo1 constructor. " << endl; p = new int(42); }
    ~Foo1() { cout << "Foo1 destructor. " << endl; delete p; }

private:
    int *p;
};

class Foo2 {
public:
    Foo2() { cout << "Foo2 constructor. " << endl; p = new int(42); }
    ~Foo2() { cout << "Foo2 destructor. " << endl; delete p; }

private:
    int *p;
};

class Foo {
public:
    Foo() { cout << "Foo constructor. " << endl; p = new int(42); }
    ~Foo() { cout << "Foo destructor. " << endl; delete p; }

private:
    int *p;
    Foo1 foo1;
    Foo2 foo2;
};


int main() {
    Foo foo;
    return 0;
}