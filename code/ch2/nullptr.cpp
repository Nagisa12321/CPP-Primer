#include <iostream>

int main() {
    int *p1 = nullptr;
    int *p2 = ((int *) 0);

    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;
}