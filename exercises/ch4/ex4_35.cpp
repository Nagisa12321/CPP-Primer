#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;

int main() {
    char cval;
    int ival;
    unsigned int ui;
    float fval;
    double dval;

    // (a) char -> int; int -> char
    cval = 'a' + 3;

    // (b) int -> double, 
    // unsigned int -> double;
    // double -> float
    fval = ui - ival * 1.0;

    // (c) ???; ??? -> double 
    dval = ui * fval;

    // (d) int -> float; 
    // float -> double 
    // double -> char
    cval = ival + fval + dval;
}