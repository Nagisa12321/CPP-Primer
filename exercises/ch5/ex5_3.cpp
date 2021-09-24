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
    int val = 0, sum = 0;
    while (val <= 10)
        sum += val, val += 1;
    cout << sum << endl;
}