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
    vector<int>::const_reverse_iterator rcur = ivec.crbegin();
    while (rcur != ivec.crend())
        cout << *rcur++ << endl;
    return 0;
}