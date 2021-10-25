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
    int n = 10;
    allocator<string> alloc;
    string *const p = alloc.allocate(n);
    string s;
    string *q = p;
    while (cin >> s && q != p + n) 
        alloc.construct(q++, s);
    const size_t size = q - p;
    for (int i = 0; i < size; ++i)
        cout << p[i] << endl;
    for (int i = 0; i < size; ++i)
        alloc.destroy(p + i);
    alloc.deallocate(p, n);
    return 0;
}