#include <iostream>

int main() {
    std::cout << "* ex1_9:" << std::endl;
    int sum = 0;
    for (int i = 50; i <= 100; i++)
        sum += i;
    std::cout << "sum from 50 to 100 is " << sum << std::endl;

    std::cout << "* ex1_10:" << std::endl;
    for (int i = 10; i >= 0; --i)
        std::cout << i << std::endl;

    std::cout << "* ex1_11:" << std::endl;
    std::cout << "Please input 2 number" << std::endl;
    int n1 = 0, n2 = 0;
    std::cin >> n1 >> n2;
    if (n1 > n2) {
        int tmp = n1;
        n1 = n2;
        n2 = tmp;
    }
    for (int i = n1 + 1; i < n2; i++)
        std::cout << i << std::endl;

    return 0;
}