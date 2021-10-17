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

int main() {
    int (*sum)(int, int) = [](int i, int j) { return i + j; };
    cout << sum(1, 2) << endl;
    cout << sum(100, 200) << endl;
    return 0;
}