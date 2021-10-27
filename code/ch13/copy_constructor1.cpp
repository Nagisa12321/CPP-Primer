#include "primer.h"
using namespace std;

class Foo {
    friend int main();
public: 
    Foo(int val) : val(val) { cout << "constructor" << endl; }
    Foo(const Foo &foo) { 
        cout << "copy-constructor" << endl; 
        val = 1024;
    }
    // Foo(const Foo &foo) = delete;
private:
    int val;
};

Foo make_foo() {
    Foo foo(20);
    return foo;
    // return Foo(20);
    // 1. return a value must use copy constructor(not delete)
    // 2. complier can cross over the copy constructor, but it must exist. 
}

int main() {
    Foo foo = make_foo();
    cout << foo.val << endl;
    return 0;
}