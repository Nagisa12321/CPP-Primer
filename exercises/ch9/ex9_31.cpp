#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

void stupid_list() {
    list<int> li = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    auto iter = li.begin();
    while(iter != li.end()) {
        if (*iter % 2) {
            li.insert(iter, *iter);
            ++iter;
        } else 
            iter = li.erase(iter);
    }

    for (int i : li)
        cout << i << " ";
    cout << endl;
}

void stupid_forward_list() {
    forward_list<int> li = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    auto prev = li.before_begin();
    auto curr = li.begin();
    while (curr != li.end()) {
        if (*curr % 2) {
            curr = li.insert_after(curr, *curr);
            prev = curr;
            ++curr;
        } else 
            curr = li.erase_after(prev);
    }

    for (int i : li)
        cout << i << " ";
    cout << endl;
}


int main() {
    stupid_list();
    stupid_forward_list();
    return 0;
}