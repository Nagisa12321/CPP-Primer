#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;

int main() {
    int i = 10;

    int *ptr = &i;
    vector<int> vec;
    int ival = 42;

    // (a)
    // if ptr is a null pointer
    // a = 0, 
    // else if ptr is not a null
    // pointer
    // if the int of the ptr is 0
    // a will be 0, else a will be 1
    // at last ptr point to the next value
    int a = ptr != 0 && *ptr++;

    // (b)
    // check ival != 0
    // then check ival + 1 != 0;
    int b = ival++ && ival;

    // (c)
    // undefined
    vec[ival++] <= vec[ival];
}