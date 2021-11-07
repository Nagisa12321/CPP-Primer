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
    Foo2 foo0;
    Foo1 foo1;
    cout << sizeof (foo0) << endl;  
    cout << sizeof (foo1) << endl;  

    // Foo2 foo2 = (Foo2) foo1;
    return 0;
}