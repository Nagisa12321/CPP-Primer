#include "primer.h"
using namespace std;

struct base {
    base() : mem(0) {}
protected:
    int mem;
};

struct dervied : base {
    dervied(int i) : mem(i) {}

    int get_mem() { return base::mem; }
protected:
    int mem;
};

int main() {
    dervied d(42);
    cout << d.get_mem() << endl;
    return 0;
}