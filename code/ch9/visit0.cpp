#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    vector<int> c = {1, 2, 3};

    int &first = c.front();
    first = 100;

    cout << &first << endl;

    vector<int>::iterator it = c.begin();

    cout << &(*it) << endl;

    for (int i : c)
        cout << i << " ";
    cout << endl;
    return 0;
}