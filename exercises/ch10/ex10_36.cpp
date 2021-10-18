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
    list<int> lst{1, 0, 2, 4, 2, 0, 4, 8};
    auto it = find(lst.rbegin(), lst.rend(), 0);
    *it = 1024;
    for (int i : lst)
        cout << i << " ";
    cout << endl;
    return 0;
}