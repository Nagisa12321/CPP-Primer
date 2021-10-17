// io
#include <iostream>
#include <cstdlib>
#include <cstdio>

// containers
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <vector>
#include <deque>
#include <forward_list>

// algorithm
#include <algorithm>
#include <numeric>

using namespace std;

void show(const deque<int> &vec) {
    for (int i : vec)
        cout << i << " ";
    cout << endl;
}

int main() {
    deque<int> vec{1, 4, 2, 8, 5, 7};
    auto it = back_inserter(vec);

    for (int i = 0; i < 10; ++i) it = i;
    show(vec);

    auto it1 = front_inserter(vec);
    for(int i = 100; i != 110; ++i) it1 = i;
    show(vec);
    return 0;
}