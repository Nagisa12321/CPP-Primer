#include <iostream>

int main() {
    int i = 42;
    int *p;

    int *&r = p;    // r is p's ref

    r = &i;         // p = &i;
    *p = 0;         // i = 0;

    std::cout << "i=" << i << std::endl;
}