#include <iostream>
#include <vector>
#include <cstdio>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;
using std::map;

int main() {
    int i = 42;
    const int *cp = &i;
    const int &r = i;
    const int &r2 = 42;

    // int *p = cp;
    // int &r3 = r;
    // int &r4 = 42;
    return 0;
}