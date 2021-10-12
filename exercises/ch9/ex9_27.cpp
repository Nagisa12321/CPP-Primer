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

forward_list<int> make_list() {
    forward_list<int> fl;
    for (int i = 0; i < 30; i++) {
        fl.push_front(rand() % 100);
    }
    return fl;
}

int main() {
    forward_list<int> flst = make_list();
    cout << " ===== before ===== " << endl;
    show(flst);

    auto prev = flst.before_begin();
    auto cur = flst.begin();

    while (cur != flst.end()) {
        if (*cur % 2) cur = flst.erase_after(prev);
        else {
            ++prev;
            ++cur;
        }
    }
    cout << " ===== after ===== " << endl;
    show(flst);
    return 0;
}