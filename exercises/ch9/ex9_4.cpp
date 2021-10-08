#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

typedef vector<int>::iterator vit;

bool can_find(vit begin, vit end, int val) {
    while (begin != end) {
        if (val == *begin++)
            return true;
    }
    return false;
}

int main() {
    vector<int> vec{1, 4, 2, 8, 5, 7};
    cout << can_find(vec.begin(), vec.end(), 8) << endl;
    cout << can_find(vec.begin(), vec.end(), 9) << endl;
    return 0;
}