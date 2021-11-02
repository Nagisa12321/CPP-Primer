#include "primer.h"
using namespace std;

class Foo {
public:
    Foo() { cout << "default constructor" << endl; }
    Foo(const Foo &) { cout << "copy constructor" << endl; }
    Foo(Foo &&) { cout << "move constructor" << endl; }
    ~Foo() { cout << "destructor" << endl; }

    Foo &operator=(const Foo &) & { cout << "copy operator" << endl; return *this; }

    Foo sorted() const & { cout << "copy sorted" << endl; return Foo(); }
    Foo sorted() && { cout << "move sorted" << endl; return Foo(); }
};

Foo get_foo() { return Foo(); }
Foo get_copy_foo(Foo &foo) { return foo.sorted(); }
Foo get_move_foo() { return get_foo().sorted(); }

int main() {
    Foo foo;
    Foo foo1 = get_copy_foo(foo);
    Foo foo2 = get_move_foo();
    // get_foo() = Foo();
    return 0;
}