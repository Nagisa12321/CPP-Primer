#include <iostream>
#include <vector>
#include <cstdio>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;

int main() {
    int ival = 50;

    // nothing happen
    ival + 5;

    // usful statment
    cout << ival;

    // null statment
    ;

    int cur;
    while (cin >> cur && cur != 100)
        ;
}