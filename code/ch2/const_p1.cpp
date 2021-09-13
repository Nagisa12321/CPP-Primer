#include <iostream>

int main() {
    int errNumb = 0;

    std::cout << errNumb << std::endl;

    // final
    int *const curErr = &errNumb;
    *curErr = 1;
    std::cout << errNumb << std::endl;

    const double pi = 3.1415926;
    const double *const pip = &pi;
}