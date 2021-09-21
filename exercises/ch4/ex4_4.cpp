#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int a = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
    int b = (((12 / 3) * 4) + (5 * 15)) + ((24 % 4) / 2);
    cout << a << endl;
    cout << b << endl;
}