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

long long factorial(int n) {
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    long long res = factorial(15);
    cout << res << endl;
    return EXIT_SUCCESS;
}