#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

int main() {
    list<int> lst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto it = lst.begin();

    while (it != lst.end())
        if (*it % 2) it = lst.erase(it);
        else ++it;

    for (int i : lst)
        cout << i << " ";
    cout << endl;
    return 0;
}