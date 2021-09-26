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

void reset(int *ip) {
    *ip = 0;
    ip = 0;
} 

int main() {
    int i = 42;
    reset(&i);
    cout << i << endl;
    return 0;
}