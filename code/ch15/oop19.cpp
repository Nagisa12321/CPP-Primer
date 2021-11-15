#include "primer.h"
using namespace std;

class base {
public:
    base() { cout << "base()" << endl; }
    base(const base &) { cout << "base(const base &)" << endl; }
    base &operator=(const base &) { cout << "base &operator=(const base &)" << endl; return *this;}
    ~base() { cout << "~base()" << endl; }
};

class derived : public base {
public:
    derived() { cout << "derived()" << endl; }
    derived(const derived &) { cout << "derived(const derived &)" << endl; }
    derived &operator=(const derived &) { cout << "derived &operator=(const derived &)" << endl; return *this; }
    ~derived() { cout << "~derived()" << endl; }
};

int main() {
    derived d1;
    cout << "test start: " << endl;
    derived d2(d1);
    cout << " ---- " << endl;
    return 0;
}