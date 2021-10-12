#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

int main() {
    forward_list<int> flst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto cur = flst.begin();
    auto before = flst.before_begin();
    while (cur != flst.end()) {
        if (*cur % 2)
            cur = flst.erase_after(before);
        else {
            ++before;
            ++cur;
        }
    }

    for (int i : flst)
        cout << i << " ";
    cout << endl;
    return 0;
}