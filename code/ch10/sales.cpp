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

#include <iterator>
#include "Sales_item.h"
using namespace std;

int main() {
    istream_iterator<Sales_item> item_iter(cin), item_eof;
    ostream_iterator<Sales_item> out_iter(cout, "\n");

    Sales_item sum = *item_iter++;
    while (item_iter != item_eof) {
        if (item_iter->isbn() == sum.isbn())
            sum += *item_iter++;
        else {
            out_iter = sum;
            sum = *item_iter++;
        }
    }
    out_iter = sum;
    return 0;
}