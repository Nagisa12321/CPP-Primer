#include <iostream>

int main() {
    int n1 = 0, n2 = 0;
    std::cout << "Please input 2 number" << std::endl;
    std::cin >> n1 >> n2;
    if (n1 > n2) {
        int tmp = n1;
        n1 = n2;
        n2 = tmp;
    }
    n1++;
    while (n1 < n2) {
        std::cout << n1++ << std::endl;
    }

    return 0;
}