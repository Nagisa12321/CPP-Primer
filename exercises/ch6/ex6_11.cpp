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

void reset(int &val) {
    val = 0;
}

int main() {
    int j = 42;
    reset(j);
    cout << "j=" << j << endl;
    return 0;
}