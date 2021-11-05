#include "primer.h"
using namespace std;

class Foo1 {
public:
    operator int() const { return 1024; }
};

class Foo2 {
public: 
    int val = 10;
    operator int &() { return val; }
};

int main() {
    cout << "test1: " << endl;
    Foo1 foo1;
    int i = foo1;
    cout << i << endl;

    cout << "test2: " << endl;
    Foo2 foo2;
    cout << foo2 << endl;
    (int &)(foo2) = 1024;
    cout << foo2 << endl;
    return 0;
}