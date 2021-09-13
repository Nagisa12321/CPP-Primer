#include <iostream>

int func() {
    return -1;
}

int r = 42;
int main() {
    func();
    std::cout << r << std::endl;
    int r = 100;
    std::cout << r << std::endl;
    std::cout << ::r << std::endl;
    std::cout << ::main << std::endl;
    std::cout << (void *) main << std::endl;
    std::cout << (void *) func << std::endl;
}