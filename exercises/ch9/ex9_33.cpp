#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

int main() {
    vector<int> vec{1, 4, 2, 8, 5, 7};
    auto begin = vec.begin();
    while (begin != vec.end()) {
        ++begin;
        /* begin = */vec.insert(begin, 42);
        ++begin;
    }

    for (int i : vec)
        cout << i << " ";
    cout << endl;
    return 0;
}