// io
#include <iostream>
#include <cstdio>

// containers
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <vector>
#include <forward_list>

// algorithm
#include <algorithm>
#include <numeric>

using namespace std;

int func() {
    return 42;
}

int main() {
    int (*lambda)() = [] { return 52; };
    int (*f)() = func;

    cout << (void *)f << endl;
    cout << f() << endl;
    cout << (void *)lambda << endl;
    cout << lambda() << endl;
    return 0;
}