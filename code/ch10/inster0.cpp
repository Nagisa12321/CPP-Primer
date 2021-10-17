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

void show(const vector<int> &vec) {
    for (int i : vec)
        cout << i << " ";
    cout << endl;
}

int main() {
    vector<int> ivec;
    for (int i = 0; i < 10; ++i) 
        ivec.push_back(i);

    show(ivec);
    auto it = inserter(ivec, ivec.begin() + 3);
    for (int i = 100; i > 90; --i)
        it = i;
    show(ivec);
    return 0;
}