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
    vector<int> ivec0;
    unsigned int r = rand();
    for (int i = 0; i < 20; ++i)
        ivec0.push_back(rand_r(&r) - (INT32_MAX >> 1));
    cout << "ivec0: " << endl;
    for (int i : ivec0)
        cout << i << endl;

    vector<int> ivec1(ivec0.size());
    transform(ivec0.begin(), ivec0.end(), ivec1.begin(), [](int val) -> int {
        return val > 0 ? val : -val;
    });
    cout << "ivec1: " << endl;
    for (int i : ivec1)
        cout << i << endl;

    return 0;
}