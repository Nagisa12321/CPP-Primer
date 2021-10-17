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

using namespace std;

int main() {
    vector<int> ivec; 
    for (int i = 0; i < 1000; i++) 
        ivec.push_back(rand() % 100);
    cout << "vector: " << endl;
    for (int i : ivec)
        cout << i << " ";
    cout << endl;

    list<int> lst;

    sort(ivec.begin(), ivec.end());
    unique_copy(ivec.begin(), ivec.end(), back_inserter(lst));

    cout << "list: " << endl;
    for (int i : lst)
        cout << i << " ";
    cout << endl; 
    return 0;
}