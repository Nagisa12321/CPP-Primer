// io
#include <iostream>
#include <cstdlib>
#include <cstdio>

// containers
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <vector>
#include <forward_list>

// algorithm
#include <algorithm>
#include <numeric>

// utils
#include <functional>

using namespace std;

bool check_size(const string &s, string::size_type sz) { return sz > s.size(); }

int main() {
    string s = "hello world";

    vector<int> ivec;
    for (int i = 0; i < 15; ++i)
        ivec.push_back(i);
    
    cout << "the vector: " << endl;
    for (int i : ivec) cout << i << " ";
    cout << endl;

    auto it = find_if(ivec.begin(), ivec.end(), bind(check_size, s, placeholders::_1));
    cout << *it << endl;
    return 0;
}