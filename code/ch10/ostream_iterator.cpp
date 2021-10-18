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

// iterator
#include <iterator>

using namespace std;

int main() {
    ostream_iterator<int> it(cout, " ");
    vector<int> ivec;
    for (int i = 0; i < 10; ++i)
        ivec.push_back(i);

    for (int i : ivec)
        it = i;
    return 0;
}