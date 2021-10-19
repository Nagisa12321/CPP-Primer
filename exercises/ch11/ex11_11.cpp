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

bool compareIsbn(const Sales_item &item1, const Sales_item &item2) {
    return item1.isbn() < item2.isbn();
}

int main() {
    multiset<Sales_item, bool (*)(const Sales_item &, const Sales_item &)> bookstore(compareIsbn); 

    return 0;
}