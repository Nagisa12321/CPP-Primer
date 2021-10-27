#include "primer.h"
using namespace std;

class Foo {
public:
    Foo() { cout << "Foo constructor. " << endl; p = new int(42); }
    ~Foo() { cout << "Foo destructor. " << endl; delete p; }

private:
    int *p;
};

Foo foos[10];

int main() {
    cout << "x" << endl;
    return 0;
}