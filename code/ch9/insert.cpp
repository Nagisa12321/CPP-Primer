#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    vector<int> v{1, 4, 2, 8, 5, 7};
    vector<int> v2{10, 20, 30, 40, 50};
    v.insert(v.begin(), v2.begin(), v2.end());
    for (int i : v)
        cout << i << " ";
    cout << endl;

    v.insert(v.begin() + 3, 10, 1024);

    for (int i : v)
        cout << i << " ";
    cout << endl;


    return 0;
}