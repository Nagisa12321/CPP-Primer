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

    3.15159L + 'a'; // long double
    dval + ival;    // double
    dval + fval;    // double
    ival = dval;    // i 
    flag = dval;    // !(dval == 0)?
    cval + fval;    // float
    sval + cval;    // int
    cval + lval;    // long
    ival + ulval;   // unsigned long
    usval + ival;   // 
    uival + lval;
}