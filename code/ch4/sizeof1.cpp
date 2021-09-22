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
    int ia[10] = {0};

    constexpr size_t sz = sizeof(ia) / sizeof(*ia);
    cout << "sz=" << sz << endl;
}