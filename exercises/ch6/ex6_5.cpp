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

int abs(int val) {
    return val < 0 ? -val : val;
} 

int main() {
    cout << "abs(-1)=" << abs(-1) << endl;
    cout << "abs(1)=" << abs(1) << endl;
    cout << "abs(-10)=" << abs(-10) << endl;
    return 0;
}