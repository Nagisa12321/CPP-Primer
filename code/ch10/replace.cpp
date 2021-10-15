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
    vector<int> v1 = {1, 2, 3, 4, 5, 6};
    vector<int> v2(6);

    replace(v1.begin(), v1.end(), 3, 30);
    for (int i : v1)
        cout << i << " ";
    cout << endl; 

    replace_copy(v1.begin(), v1.end(), v2.begin(), 2, 1024);
    for (int i : v2) 
        cout << i << " ";
    cout << endl;
    return 0;
}