#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

int main() {
    int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };

    list<int> lst;
    vector<int> vec;

    for (int i : ia) {
        lst.push_back(i);
        vec.push_back(i);
    }

    for (auto it = lst.begin(); it != lst.end(); ++it) 
        if (!(*it % 2)) it-- = lst.erase(it);

    for (auto it = vec.begin(); it != vec.end(); ++it)
        if (*it % 2) it-- = vec.erase(it);

    for (int i : lst)
        cout << i << " ";
    cout << endl;

    for (int i : vec)
        cout << i << " ";
    cout << endl;
    return 0;
}