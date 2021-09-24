#include <iostream>
#include <vector>
#include <cstdio>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;

int get_val() {
    return 10;
}

int main() {
    int ival = 1024;
    int ival1 = 10;
    int ival2 = 20;
    int minval = 0;
    int occous = 19;

    // (a)
    if (ival1 != ival2)
        ival1 = ival2;
    else ival1 = ival2 = 0;

    // (b)
    if (ival < minval) {
        minval = ival;
        occous = 1;
    }

    // (c)
    int ival;
    if (ival = get_val()) {
        // ...
    }
    if (!ival) {
        // ... 
    }

    // (d)
    if (ival == 0) {
        // ... 
    }

}