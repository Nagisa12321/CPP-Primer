#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    vector<int> v1;
    const vector<int> v2;
    // error
    // auto it1 = v1.begin(), it2 = v2.begin();

    // vector<int>::const_iterator
    auto it3 = v1.cbegin(), it4 = v2.cbegin();
    return 0;
}