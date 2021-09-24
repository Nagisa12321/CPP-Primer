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
    int i = 3;
    double d = 2.5;

    i *= static_cast<int>(d);

    cout << i << endl;
}