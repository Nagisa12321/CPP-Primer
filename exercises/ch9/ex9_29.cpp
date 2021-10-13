#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

void show(const vector<int> &vec) {
    for (int i : vec)
        cout << i << " ";
    cout << endl;
}

int main() {
    vector<int> vec(25, 42);
    show(vec);
    vec.resize(100);
    show(vec);
    vec.resize(10);
    show(vec);  
    return 0;
}