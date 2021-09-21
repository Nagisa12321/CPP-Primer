#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    // (a) - -86
    int a = -30 * 3 + 21 / 5;
    // (b) - -18
    int b = -30 + 3 * 21 / 5;
    // (c) - 0
    int c = 30 / 3 * 21 % 5;
    // (d) - -2
    int d = -30 / 3 * 21 % 4;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
}