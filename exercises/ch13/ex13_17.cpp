#include "primer.h"
using namespace std;

class numbered {
public:
    numbered() : mysn(rand()) {}
    numbered(const numbered &) : mysn(rand()) {}
    int mysn;
};

void f(const numbered &s) { cout << "f(): " << s.mysn << endl; }

int main() {
    numbered a, b = a, c = b;
    f(a); f(b); f(c);   

    cout << a.mysn << endl;
    cout << b.mysn << endl;
    cout << c.mysn << endl;
    return 0;
}