#include "primer.h"
using namespace std;

class Foo1 {
public:
    virtual void show() { cout << "Foo1!" << endl; }
};

class Foo2 : public Foo1 {
public:
    void show() { cout << "Foo2!" << endl; }
};

int main() {
    Foo2 foo2;
    Foo1 *pfoo = &foo2;
    Foo1 &rfoo = foo2;

    Foo2 *pfoo2 = static_cast<Foo2 *>(pfoo);  
    pfoo2->show();

    Foo1 foo1_0(foo2);
    foo1_0.show();

    Foo1 foo1_1 = (Foo1) foo2;
    foo1_1.show();
    return 0;
}