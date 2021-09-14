#include <iostream>

using uint = unsigned int;

int main() {
    typedef double wages;
    typedef wages base, *p;

    wages w = 3.14;
    p wq = &w;

    uint a = -1;
    std::cout << a << std::endl;
}