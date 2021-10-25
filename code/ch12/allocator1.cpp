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
    string *const sp = alloc.allocate(n);
    for (int i = 0; i < n; ++i) {
        /* segement fault */
        // sp[i] = string("aaaaaa");

        /* ok */
        // string str = "aaaa";
        // sp[i] = str;
        alloc.construct(sp + i, 10, 'c');
    }

    for (int i = 0; i < n; ++i) {
        cout << sp[i] << endl;
    }
    alloc.deallocate(sp, n);
    return 0;
}