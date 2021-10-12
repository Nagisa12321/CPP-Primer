#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>

using namespace std;

int main() {
    list<int> li{1, 4, 2, 8, 5, 7};
    vector<int> vec{1, 4, 2, 8, 5, 7};

    vector<double> v1(li.begin(), li.end());
    for (int i : v1)
        cout << i << " ";
    cout << endl;

    vector<double> v2(vec.begin(), vec.end());
    for (int i : v2)
        cout << i << " ";
    cout << endl;
    return 0;
}