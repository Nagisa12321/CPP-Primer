#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

int main() {
    vector<int> v0;
    for (int i = 0; i < 100; i++) {
        v0.push_back(i);
        cout << "size=" << v0.size() 
             << ", capacity=" << v0.capacity() 
             << endl;
    }

    v0.reserve(120);
    cout << "size=" << v0.size() 
            << ", capacity=" << v0.capacity() 
            << endl;
    return 0;
}