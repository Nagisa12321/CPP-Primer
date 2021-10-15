// io
#include <iostream>
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
    vector<int> vec;
    for (int i = 1; i <= 100; ++i)
        vec.push_back(i);

    int sum = accumulate(vec.begin(), vec.end(), 0);
    cout << sum << endl;
    return 0;
}