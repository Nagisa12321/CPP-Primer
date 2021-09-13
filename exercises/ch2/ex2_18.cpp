#include <iostream>

int main() {
    int val1 = 10;
    int val2 = 20;

    // change the value of the pointer
    int *p = &val1;
    std::cout << "*p: " << *p << std::endl;
    p = &val2;
    std::cout << "*p: " << *p << std::endl;

    // change the value the pointer point to
    p = &val1;
    *p = 1024;
    std::cout << "val1: " << val1 << std::endl;

}