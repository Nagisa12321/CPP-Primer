#include "primer.h"
using namespace std;


class Foo1 {
public:
    void show() { cout << "Foo1!" << endl; }
};

class Foo2 : public Foo1 {
public:
    void show() { Foo1::show(); cout << "Foo2!" << endl; }
};

class Foo3 : public Foo2 {
public:
    void show() { cout << "Foo3!" << endl; }
};

void fn(Foo1 &foo) { foo.show(); }

int main() {
    Foo1 foo1;
    Foo2 foo2;
    Foo3 foo3;

    // fn(foo1);
    fn(foo2);
    cout << " ---- " << endl;
    foo2.show();
    // fn(foo3);
    return 0;
}