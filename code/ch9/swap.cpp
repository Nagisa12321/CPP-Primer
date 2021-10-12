#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

void show(const vector<int> &v) {
    for (int i : v)
        cout << i << " ";
    cout << endl;
}

int main() {
    vector<int> vec1 = {1, 2, 3, 4, 5, 6};
    vector<int> vec2 = {4, 5, 6, 7, 8, 9};

    vector<int> v1 = vec1;
    show(v1);
    v1 = vec2;
    show(v1);

    cout << " --------- " << endl;

    show(vec1);
    show(vec2);
    swap(vec1, vec2);
    show(vec1);
    show(vec2);
    vec1.swap(vec2);
    show(vec1);
    show(vec2);

    cout << " --------- " << endl;

    vec1.assign(vec2.begin() + 1, vec2.end() - 1);
    show(vec1);
    show(vec2);

    return 0;
}