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
    int a1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int a2[end(a1) - begin(a1)];

    int *p = copy(begin(a1), begin(a1) + sizeof(a1) / sizeof(*a1), a2);

    for (int i : a2)
        cout << i << " ";
    cout << endl;

    cout << p << endl;
    cout << end(a2) << endl;
    return 0;
}