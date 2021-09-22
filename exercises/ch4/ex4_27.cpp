#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;

int main() {
    unsigned long ul1 = 3, ul2 = 7;

    printf("%ld\n", ul1 & ul2);  // 3
    printf("%ld\n", ul1 | ul2);  // 7
    printf("%d\n", ul1 && ul2); // 1
    printf("%d\n", ul1 || ul2); // 1
}