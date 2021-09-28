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

constexpr int new_sz(int v) {
    int res = 0;
    while (v > 0)
        res += v--;
    return res;
}
constexpr int k = 10;
constexpr int foo = new_sz(k);

int main() {
    return EXIT_SUCCESS;
}