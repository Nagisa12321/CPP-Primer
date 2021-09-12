#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item last, cur;

    int num = 0;
    while (std::cin >> cur) {
        if (cur.isbn() != last.isbn())
            num++;
        last = cur;
    }
    std::cout << num << std::endl;
}