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
    vector<int> vec{1, 4, 2, 8, 5, 7};
    for_each(vec.begin(), vec.end(), [](int &val) { val = 100; });
    for_each(vec.begin(), vec.end(), [](int val) { cout << val << " "; });
    return 0;
}