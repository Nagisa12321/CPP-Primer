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

#include "Sales_item.h"

using namespace std;

int main() {
    unordered_set<Sales_item, decltype(hasher), decltype(eqOp)> 
        items(42, hasher, eqOp);
    
    return 0;
}