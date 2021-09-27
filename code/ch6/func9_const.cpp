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

void reset(int &r) {
    r = 0;
} 

void reset(int *p) {
    *p = 0;
}

int main() {
    int i = 0;
    const int ci = i;
    string::size_type ctr = 0;

    reset(&i);
    // reset(&ci);
    reset(i);
    // reset(ci);
    // reset(42);
    // reset(ctr);
    return 0;
}