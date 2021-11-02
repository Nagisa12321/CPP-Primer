#include "primer.h"
using namespace std;

class Foo {
public:
    Foo() { cout << "default constructor" << endl; }
    Foo(const Foo &) { cout << "copy constructor" << endl; }
    ~Foo() { cout << "destructor" << endl; }

    Foo &operator=(Foo) { cout << "copy operator" << endl; return *this; }
};

int main() {
    Foo foo1, foo2;
    cout << "test start: " << endl;
    foo1 = foo2;
    cout << " ---- " << endl;
  
    return 0;
}