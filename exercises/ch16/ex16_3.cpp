#include "primer.h"
using namespace std;

class sales_data {}; 

template <typename T>
int compare__(const T &t1, const T &t2) {
    if (t1 < t2) return -1;
    else if (t2 < t1) return 1;
    else return 0;
}

int main() {
    sales_data a, b;
    /*
    ex16_3.cpp:8:12: error: invalid operands to binary expression ('const sales_data' and 'const sales_data')
    if (t1 < t2) return -1;
        ~~ ^ ~~
    */
    compare__(a, b);
    return 0;
}