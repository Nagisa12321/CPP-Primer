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
    int *q = new int(42), *r = new int(100);
    r = q; 
    // r and q will point to the address 42 \
    but will memory leakage 

    auto q2 = make_shared<int>(42), r2 = make_shared<int>(100);
    r = q;
    // .... 
    return 0;
}