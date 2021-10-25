// io
#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <cstdio>

// containers
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <vector>
#include <forward_list>

// algorithm
#include <algorithm>
#include <iterator>
#include <numeric>

// memory
#include <memory>

using namespace std;

int main() {
    vector<int> vec{1, 2, 3};
    allocator<int> alloc;
    int *ip = alloc.allocate(5);
    int *q = uninitialized_copy(vec.begin(), vec.end(), ip);
    uninitialized_fill(q, ip + 5, 1024);
    for (int i = 0; i < 5; ++i) 
        cout << ip[i] << " ";
    cout << endl;
    return 0;
}