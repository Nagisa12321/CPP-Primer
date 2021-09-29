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

int main() {
    int ia[] = {1, 2, 3};

    int (&ra)[3] = ia;
    return EXIT_SUCCESS;
}