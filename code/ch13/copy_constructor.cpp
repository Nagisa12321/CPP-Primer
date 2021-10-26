#include "primer.h"

using namespace std;

class Foo {
public:
    Foo(int val) : val(val) { cout << "default constructor." << endl; }
    Foo(const Foo &foo) { cout << "copy constructor." << endl; }

    int val;
};

int test_1(Foo foo) { 
    cout << "foo.val=" << foo.val << endl;
    return -1; 
}

Foo test_2() {
    Foo foo = Foo(20);
    return foo;
}

int main() {
    Foo foo1(18);
    Foo foo2 = foo1;
    cout << "foo1.val=" << foo1.val << endl; 
    cout << "foo2.val=" << foo2.val << endl; 
    Foo foo3(foo1);
    cout << "foo1.val=" << foo1.val << endl; 
    cout << "foo3.val=" << foo3.val << endl; 
    test_1(foo1);
    Foo foo4 = test_2();  // ? 
    cout << "foo4.val=" << foo4.val << endl; 

    return 0;
}