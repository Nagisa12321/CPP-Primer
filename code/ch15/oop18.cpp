#include "primer.h"
using namespace std;

class base {
public:
    base() { cout << "base()" << endl; }
    virtual ~base() { cout << "~base()" << endl; }
};

class derived : public base {
public:
    derived() { cout << "derived()" << endl; }
    ~derived() { cout << "~derived()" << endl; }
};

int main() {
    // derived d;
    base *b = new derived;
    delete b;
    return 0;
}