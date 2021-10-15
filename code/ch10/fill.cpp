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
    vector<int> vec(20);

    fill(vec.begin(), vec.end() - 5, 1024); 

    for (int i : vec)
        cout << i << " ";
    cout << endl;   

    fill(vec.begin(), vec.begin() + 30, -1);

    for (int i : vec)
        cout << i << " ";
    cout << endl;   
    return 0;
}