#include <iostream>

int main() {
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a; 

    ++c;
    ++d;
    std::cout << "a=" << a << std::endl;    // 4
    std::cout << "b=" << b << std::endl;    // 4
    std::cout << "c=" << c << std::endl;    // 4
    std::cout << "d=" << d << std::endl;    // 4
}   