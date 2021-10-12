#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

void show(const forward_list<int> &flst) {
    for (int i : flst)
        cout << i << " ";
    cout << endl;
}

int main() {
    forward_list<int> flst = { 1, 4, 2, 8, 5, 7 };
    flst.erase_after(flst.before_begin());
    show(flst);

    for (auto it = flst.begin(); it != flst.end(); ++it)
        cout << *it << endl;

    // [4, 2, 8, 5, 7] -> [4, 2, 7]
    auto it1 = flst.begin();
    ++it1;
    auto it2 = flst.begin();
    for (int i = 0; i < 4; ++i)
        ++it2;
    
    flst.erase_after(it1, it2);
    show(flst);
    return 0;
}