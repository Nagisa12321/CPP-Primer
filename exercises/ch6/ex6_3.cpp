#include <iostream>
#include <vector>
#include <cstdio>
#include <map>
#include "Chapter6.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;
using std::map;


int main() {
    int j = fact(5);
    cout << "5! = " << j << endl;
    return 0;
}

int fact(int val) {
    int res = 1;
    while (val > 1) 
        res *= val--;
    return res;
}