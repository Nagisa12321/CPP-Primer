#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

void show(const vector<int> &v) {
    for (int i : v)
        cout << i << " ";
    cout << endl;
}

int main() {
    vector<int> vec{1, 2, 3, 4};
    // vec.push_back(5);
    show(vec);
    vec.emplace_back(6);
    show(vec);
    return 0;
}