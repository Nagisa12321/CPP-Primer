#include "primer.h"
using namespace std;

class Foo0 {
public:
    virtual void show(int i = 10) {
        cout << "Foo0: " << i << endl;
    }
};

class Foo1 : public Foo0 {
public:
    void show(int i = 20) {
        cout << "Foo1: " << i << endl;
    } 
};

int main() {
    Foo0 *foo = new Foo1();
    foo->show();
    delete foo;
    return 0;
}