#include "primer.h"
using namespace std;

struct base {
    int memfcn();
};

struct derived : base {
    int memfcn(int);
};

int main() {
    base b;
    derived d;

    b.memfcn();
    d.memfcn(10);
    d.base::memfcn();
    return 0;
}