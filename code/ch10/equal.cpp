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
    vector<int> vec{1, 2, 3, 4, 5, 6};
    list<int> lst{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    bool eq1 = equal(vec.begin(), vec.end(), lst.begin());
    cout << eq1 << endl;
    bool eq2 = equal(lst.begin(), lst.end(), vec.begin());
    cout << eq2 << endl;
    return 0;
}