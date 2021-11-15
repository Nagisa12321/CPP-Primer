#include "primer.h"
using namespace std;

class B {
public:
    B() { show(); }
protected:
    virtual void show() { cout << "I am in B" << endl; }
};

class D : public B {
public:
    D() { show(); }
protected:
    virtual void show() { cout << "I am in D" << endl; }
};

int main() {
    D d;
    return 0;
}