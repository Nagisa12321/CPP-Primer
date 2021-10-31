#include "primer.h"
using namespace std;

int main() {
    int rr1 = 42;
    // int &&rr2 = rr1;

    int &&rr3 = move(rr1);
    rr3 = 50;
    cout << rr3 << endl;
    cout << rr1 << endl;
    return 0;
}