#include <iostream>

int main() {
    int a = 3, b = 4;

    decltype(a) c = a;
    decltype(a = b) d = a;

    std::cout << "a=" << a << std::endl;    // 3
    std::cout << "b=" << b << std::endl;    // 4
    std::cout << "c=" << c << std::endl;    // 3
    std::cout << "d=" << d << std::endl;    // 3
}