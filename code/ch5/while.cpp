#include <iostream>
#include <vector>
#include <cstdio>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;

int main() {
    vector<int> v;
    int i;
    while (cin >> i) 
        v.push_back(i);

    auto it = v.begin();
    while (it != v.end() && *it >= 0)
        ++it;
    if (it == v.end()) {
        // ... 
    }
}