#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int ia[] = {1, 2, 3, 4, 1024, 6};

    int a = *(ia + 4); // 1024
    int b = *ia + 4;   // 5

    cout << a << endl;
    cout << b << endl;
}