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
    for (int i = 0; i < 10; ++i)
        vec.push_back(rand());

    for (int i : vec) 
        cout << i << " ";
    cout << endl;

    fill_n(vec.begin(), vec.size(), 0);

    for (int i : vec)
        cout << i << " ";
    cout << endl;
    return 0;
}