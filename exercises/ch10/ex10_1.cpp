// io
#include <iostream>
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

using namespace std;

int main() {
    vector<int> ivec;

    int i;
    while (cin >> i) 
        ivec.push_back(i);

    for (int i : ivec)
        cout << i << " ";
    cout << endl;
    
    auto nums = count(ivec.begin(), ivec.end(), 5);
    cout << nums << endl;
    return 0;
}