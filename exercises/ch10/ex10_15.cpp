// io
#include <iostream>
#include <cstdlib>
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

int sum(int x) {
    int i = 42;
    auto lambda = [x](int y) { return x + y; };
    return lambda(i);
}

int main() {
    cout << sum(42) << endl;
    return 0;
}