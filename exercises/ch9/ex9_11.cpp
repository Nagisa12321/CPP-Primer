#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

void show(const vector<int> &v) {
    cout << " ------------ " << endl;
    cout << "[";
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i];
        if (i != v.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    vector<int> v1;
    show(v1);
    vector<int> v2(10);
    show(v2);
    vector<int> v3(10, 42);
    show(v3);
    vector<int> v4{1, 2, 3, 4, 5, 6};
    show(v4);
    vector<int> v5(v4);
    show(v5);
    vector<int> v6(v5.rbegin(), v5.rend());
    show(v6);
    return 0;
}