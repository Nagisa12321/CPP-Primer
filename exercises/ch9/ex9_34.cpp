#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

int main() {
    vector<int> vi = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    auto iter = vi.begin();
    while (iter != vi.end()) {
        if (*iter & 0x1) {
            iter = vi.insert(iter, *iter);
            ++iter;
        }
        ++iter;
    }

    for (int i : vi)
        cout << i << " ";
    cout << endl;
    return 0;
}