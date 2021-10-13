#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

void show(const list<int> &lst) {
    for (int i : lst)
        cout << i << " ";
    cout << endl;
}

int main() {
    list<int> ilist(10, 42);
    show(ilist);
    ilist.resize(15);
    show(ilist);
    ilist.resize(5);
    show(ilist);
    ilist.resize(10, -1);
    show(ilist);
    return 0;
}