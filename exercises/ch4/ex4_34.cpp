#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;

int main() {
    bool flag;
    short sval;
    int ival;
    long lval;
    float fval;
    char cval;
    unsigned short usval;
    unsigned int uival;
    unsigned long ulval;
    double dval;

    // (a) float -> bool
    if (fval) {
        // ... 
    }

    // (b) int -> float; float -> double
    dval = fval + ival;

    // (c) char -> int; int -> double
    dval + ival * cval;
}