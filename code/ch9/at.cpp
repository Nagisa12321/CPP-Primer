#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    vector<int> c = {1, 4, 2, 8, 5, 7};
    c.at(2) = 200;

    for (int i : c)
        cout << i << " ";
    cout << endl;

    c.at(c.size()) = 100;
    return 0;
}