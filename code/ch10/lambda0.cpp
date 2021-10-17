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

int function(int i, int j) {
    return i + j;
}

int main() {
    int (*func)(int, int) = function;
    int (*lambda)(int, int) = [](int i, int j) -> int { return i - j; };
    auto lambda2 = [](int i, int j) -> int { return i - j; };

    cout << func(1, 2) << endl;
    cout << lambda(1, 2) << endl;
    return 0;
}