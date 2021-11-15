#include "primer.h"
using namespace std;

class B {
public:
    int i, j;
};

class D : public B {
public:
    int i, j;
};

int main() {
    D d1;
    d1.i = 10, d1.j = 20, d1.B::i = 30, d1.B::j = 40;
    D d2(d1);
    cout << d2.i << ", " << d2.j << ", " << d2.B::i << ", " << d2.B::j << endl;

    D d3;
    d3 = d1;
    cout << d3.i << ", " << d3.j << ", " << d3.B::i << ", " << d3.B::j << endl;
    return 0;
}