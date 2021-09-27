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
using std::begin;
using std::end;
using std::map;

int func(int val, const int *ip) {
    return val > *ip ? val : *ip;
}

int main() {    
    int i = 100; 
    int j = 200;
    cout << func(i, &j) << endl;
    return 0;
}