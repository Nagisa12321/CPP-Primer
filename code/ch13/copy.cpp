#include "primer.h"
using namespace std;

class Foo {
    friend int main();
public:
    Foo(int i) : p(new int(i)) {}
    Foo(const Foo &foo) : p(new int(*foo.p)) {}
    ~Foo() { delete p; }

    Foo &operator=(const Foo &foo) {
        if (&foo == this)
            return *this;
        
        delete p;
        p = new int(*foo.p);
        return *this;
    }
private:
    int *p;
};

int main () {
    Foo f1(1);
    Foo f2(2);

    copy(&f1, &f1 + 1, &f2);
    cout << "f1: " << f1.p << ", " << *f1.p << endl;
    cout << "f2: " << f2.p << ", " << *f2.p << endl;

    cout << " ---- " << endl;

    Foo f3(1);
    Foo f4(2);

    uninitialized_copy(&f3, &f3 + 1, &f4);
    cout << "f1: " << f3.p << ", " << *f3.p << endl;
    cout << "f2: " << f4.p << ", " << *f4.p << endl;

    
}