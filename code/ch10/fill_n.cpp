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
    fill_n(vec.begin(), vec.size(), 0);

    for (int i : vec)
        cout << i << " ";
    cout << endl;

    vector<int> vec1{1, 4, 2, 8, 5, 7};

    fill_n(&vec1[1], 3, 1024);
    for (int i : vec1)
        cout << i << " ";
    cout << endl;
    return 0;
}