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
    list<int> lst;
    for (int i = 1; i <= 10; ++i)
        ivec.push_back(i);
    copy(&ivec[2], &ivec[7], front_inserter(lst));
    cout << "ivec: ";
    for (int i : ivec) 
        cout << i << " ";
    cout << endl;

    cout << "lst: ";
    for (int i : lst)
        cout << i << " ";
    cout << endl;
    return 0;
}