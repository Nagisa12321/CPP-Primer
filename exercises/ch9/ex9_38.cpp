#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

int main() {
    size_t last_capacity = 0xffffffff;
    vector<int> v;
    for (int i = 0; i < INT32_MAX; ++i) {
        v.push_back(i);
        if (v.capacity() != last_capacity) {
            cout << v.capacity() << endl;
            last_capacity = v.capacity();
        }
    }

    return 0;
}