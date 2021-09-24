#include <iostream>
#include <vector>
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;

int main() {
    constexpr int sz = 5;
    int ia[sz] = {1, 2, 3, 4, 5};
    for (int *ptr = ia, ix = 0; ix != sz && ptr != ia + sz; ++ix, ++ptr) {
        // .... 
    }
}