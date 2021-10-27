#include "primer.h"
using namespace std;

struct X {
    X() { cout << "X()" << endl; }
    X(const X &x) { cout << "const X(const X &)" << endl; }
    
    X& operator=(const X &x) {
        cout << "operator=" << endl;
        return *this;
    }

    ~X() { cout << "~X()" << endl; }
};

void ref(X &x) {}
void not_ref(X x) {}
X not_ref_ret(X x) { return x; }

int main() {
    cout << "> stack alloc" << endl;
    X x1;
    cout << "> heap alloc" << endl;
    X *x2 = new X();
    cout << "> call with ref" << endl;
    ref(x1);
    cout << "> call with no ref" << endl;
    not_ref(x1);
    cout << "> call with no ref, and return" << endl;
    X ret = not_ref_ret(x1);
    cout << "---" << endl;

    return 0;
}