#include <iostream>

int main() {
    int i = 42;
    int &r1 = i;
    const int &r2 = i;

    std::cout << r2 << std::endl;
    
    r1 = 0;
    // r2 = 0;
    
    std::cout << r2 << std::endl;
}