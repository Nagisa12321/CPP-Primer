#include "primer.h"
using namespace std;

int main() {
    int i = 42;
    int &r = i;
    // int &&rr = i;
    // int &r2 = i * 42;
    int &&rr2 = i * 42;
    cout << rr2 << endl;
    rr2 = 100;
    cout << rr2 << endl;

    return 0;
}