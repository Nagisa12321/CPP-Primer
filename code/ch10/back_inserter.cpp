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
    vector<int> vec{1, 2, 3};

    auto it = back_inserter(vec);
    it = 42;
    show(vec);

    it = 43;
    show(vec);

    vector<int> vec2;
    fill_n(back_inserter(vec2), 10, 42);
    show(vec2);
    return 0;
}