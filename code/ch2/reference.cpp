#include <iostream>

int main() {
    int ival = 1024;
    int &refval = ival;
    
    // int &refval2;

    refval = 2;
    int ii = refval;

    int &refval3 = refval;
    int i = refval;

    // int &refval4 = 10;

    // double dval = 3.14;
    // int &refval5 = dval;
}