#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>
#include <forward_list>

using namespace std;

int main() {
    forward_list<int> list = {1, 4, 2, 8, 5, 7};
    while (!list.empty()) {
        cout << list.front() << endl;
        list.pop_front();
    }

    return 0;
}