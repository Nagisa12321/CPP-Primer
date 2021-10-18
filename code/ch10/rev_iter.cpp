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
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto it = ivec.crbegin(); it != ivec.crend(); ++it)
        cout << *it << endl;
    return 0;
}