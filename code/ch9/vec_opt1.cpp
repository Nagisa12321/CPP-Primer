#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>

using namespace std;

int main() {
    list<int> l;
    for (int i = 0; i < 10; i++)
        l.push_front(i);

    for (int i : l)
        cout << i << " ";
    cout << endl;

    vector<int> v{1, 4, 2, 8, 5, 7};
    v.insert(v.begin() + 1, 10);
    for (int i : v)
        cout << i << " ";
    cout << endl;

    return 0;
}