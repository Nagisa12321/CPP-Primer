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
    forward_list<int> lst0{1, 3, 5, 7, 9};
    forward_list<int> lst1{2, 4, 6, 8, 10};

    lst0.splice_after(lst0.before_begin(), lst1);

    for (int i : lst0)
        cout << i << " ";
    cout << endl;
    for (int i : lst1)
        cout << i << " ";
    cout << endl;
    return 0;
}