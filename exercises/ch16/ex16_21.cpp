#include "primer.h"
using namespace std;

class debug_delete {
public:
    debug_delete(ostream &s) : os(s) {}
    template <typename PointerType> void operator()(PointerType *p) {
        os << "will delete the pointer" << p << endl;
        delete p;
    }
private:
    ostream &os;
};

int main() {
    debug_delete dd(cout);
    int *pi = new int;
    double *pd = new double;
    cout << pi << endl;
    cout << pd << endl;
    dd(pi);
    dd(pd);
    return 0;
}