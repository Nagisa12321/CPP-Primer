#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item sum, cur;
    while (std::cin >> cur) {
        if (sum.isbn() == cur.isbn())
            sum += cur;
        else 
            sum = cur;
    }
    std::cout << sum << std::endl;
    return 0;
}