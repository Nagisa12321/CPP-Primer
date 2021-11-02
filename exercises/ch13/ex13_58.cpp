#include "primer.h"
using namespace std;

class Foo {
public:
    Foo() { cout << "default constructor" << endl; }
    Foo(const Foo &) { cout << "copy constructor" << endl; }
    Foo(Foo &&) { cout << "move constructor" << endl; }
    ~Foo() { cout << "destructor" << endl; }

    Foo &operator=(const Foo &) & { cout << "copy operator" << endl; return *this; }

    Foo sorted() const & { cout << "copy sorted" << endl; return Foo(*this).sorted(); }
    Foo sorted() && { cout << "move sorted" << endl; return Foo(); }
};

int main() {
    Foo foo;
    cout << "test start: " << endl;
    Foo foo1 = foo.sorted();
    cout << " --- " << endl;
    return 0;
}