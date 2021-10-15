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

void show(const vector<int> &vec) {
    for (int i : vec)
        cout << i << " ";
    cout << endl;
}

int main() {
    vector<int> vec{1, 4, 2, 8, 5, 7};
    auto result = find(vec.begin(), vec.end(), 5);
    
    cout << "The value " << 5
         << (result == vec.cend() ?
            " is not present" : 
            " is present")
         << endl;

    *result = 100;
    show(vec);
    return 0;
}