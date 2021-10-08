#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

typedef vector<int>::iterator vit;

vit find_it(vit begin, vit end, int val) {
    while (begin != end) {
        if (val == *begin)
            return begin;
        ++begin;
    }
    return end;
}

int main() {
    vector<int> vec{1, 4, 2, 8, 5, 7};
    vit it1 = find_it(vec.begin(), vec.end(), 8);
    vit it2 = find_it(vec.begin(), vec.end(), 9);
    cout << (it1 == vec.end() ? "null" : to_string(*it1)) << endl;
    cout << (it2 == vec.end() ? "null" : to_string(*it2)) << endl;
    return 0;
}