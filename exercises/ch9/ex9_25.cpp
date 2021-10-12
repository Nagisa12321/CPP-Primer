#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

int main() {
    vector<int> slist = {1, 4, 2, 8, 5, 7};

    auto elem1 = slist.begin() + 2;
    auto elem2 = slist.begin() + 2;

    elem1 = slist.erase(elem1, elem2);

    for (int i : slist)
        cout << i << " ";
    cout << endl;
    return 0;
}