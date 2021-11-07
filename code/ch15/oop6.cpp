#include "primer.h"
using namespace std;


class Foo1 {
public:
    void show() { cout << "Foo1!" << endl; }
};

class Foo2 : public Foo1 {
public:
    void show() { cout << "Foo2!" << endl; }
};

void fn(Foo1 &foo) { foo.show(); }

int main() {
    Foo2 foo0;
    Foo1 foo1;

    fn(foo0);
    fn(foo1);
    foo0.show();
    return 0;
}