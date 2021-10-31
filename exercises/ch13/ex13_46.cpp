#include "primer.h"
using namespace std;

int f() { return -1; }
vector<int> vi(100);

int main() { 
    int &&r1 = f();
    int &r2 = vi[0];
    int &r3 = r1;
    int &&r4 = f() * vi[0];
    return 0;
}