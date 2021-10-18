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
    vector<int> ivec{1, 2, 3, 4, 5};
    for (auto it = ivec.end() - 1; it != ivec.begin() - 1; --it)
        cout << *it << endl;
    return 0;
}