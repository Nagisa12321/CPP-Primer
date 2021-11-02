#include "primer.h"
using namespace std;

class Foo {

public:
    Foo() { cout << "default constructor. " << endl; }
    ~Foo() { cout << "destructor. " << endl; }
    Foo(const Foo &) { cout << "copy constructor. " << endl; }
    // Foo(const Foo &&) noexcept { cout << "move constructor. " << endl; }

    Foo &operator=(const Foo &) { cout << "copy operator." << endl; return *this; }
    // Foo &operator=(const Foo &&) { cout << "move operator." << endl; return *this; }
};

Foo get_foo() { return Foo(); }

int main() {
    cout << "test 1: " << endl;
    Foo f1, f2;
    
    cout << "test 2: " << endl;
    f1 = f2;

    cout << "test 3: " << endl;
    f2 = get_foo();

    cout << "----" << endl;

    return 0;
}