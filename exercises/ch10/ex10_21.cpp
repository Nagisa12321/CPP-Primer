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

    auto decrease = [&i] {if (i) --i; return !i; };
    for (int j = 0; j < 100; ++j) {
        bool zero = decrease();
        cout << zero << ", i=" << i << endl;
    }
    return 0;
}