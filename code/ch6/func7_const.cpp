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

    // top const
    const int ci = 42;
    int i = ci;

    // low const
    int *const p = &i;
    *p = 0;
    return 0;
}