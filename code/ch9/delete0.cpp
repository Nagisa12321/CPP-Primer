#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

void show(const vector<int> &c) {
    for (int i : c)
        cout << i << " ";
    cout << endl;
}

int main() {
    vector<int> c = {1, 4, 2, 8, 5, 7};
    c.pop_back();
    show(c);        // 1, 4, 2, 8, 5
    
    vector<int>::iterator it = c.begin() + 2;
    vector<int>::iterator ret_it = c.erase(it, c.end() - 1);
    show(c);        // 1, 4, 5
    cout << *ret_it << endl;    // 5
    return 0;
}