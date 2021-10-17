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
    int i = 42;
    auto f = [i] { return i; };
    i = 0;
    cout << f() << endl;
    return 0;
}