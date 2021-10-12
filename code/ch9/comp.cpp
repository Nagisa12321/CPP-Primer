#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {1, 2, 3};
    vector<int> v3 = {1, 2, 3, 0};

    cout << (v1 == v2) << endl;
    cout << (v2 < v3) << endl;
    return 0;
}