#include "primer.h"
using namespace std;

class Foo {
public:
    Foo(int val) : val(val) {
        cout << "default constructor." << endl;
    }

    Foo(const Foo &foo) : val(foo.val) {
        cout << "copy constructor." << endl;
    }

    Foo &operator=(const Foo &foo) {
        cout << "copy operator." << endl;
        return *this;
    }

    int val;
};

int main() {
    Foo foo1(42);
    Foo foo2(1024);

    foo1 = foo2;
    cout << "foo1.val=" << foo1.val << endl;
    cout << "foo2.val=" << foo2.val << endl;
}