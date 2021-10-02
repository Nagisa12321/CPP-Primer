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

class Y;

class X {
    Y *y;
};

class Y {
    X x;
};

int main() {
    X x;
    Y y;
    return EXIT_SUCCESS;
}