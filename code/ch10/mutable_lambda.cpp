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
    int v1 = 42;
    auto f = [&v1] { ++v1; };
    f();
    cout << v1 << endl;
    return 0;
}