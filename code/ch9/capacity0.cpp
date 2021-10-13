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
    v0.reserve(20); 
    for (int i = 0; i < 100; ++i) {
        v0.push_back(i);
        cout << "size=" << v0.size() 
             << ", capacity=" << v0.capacity() 
             << endl;
    }
    v0.shrink_to_fit();
    cout << "size=" << v0.size() 
             << ", capacity=" << v0.capacity() 
             << endl;

    vector<int> v1(100, 42);
    v1.reserve(0);
    cout << "size=" << v1.size() 
             << ", capacity=" << v1.capacity() 
             << endl;
    return 0;
}