#include "primer.h"
using namespace std;

struct C {
    C(int);
};

struct D {
    D(int);
};

void manip(const C &) {}
void manip(const D &) {}

int main() {
    // manip(10);
    manip(C(10));
    manip(D(10));
    return 0;
}