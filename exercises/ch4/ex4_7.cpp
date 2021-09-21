#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int a = 0xffffffff >> 1;
    int b = -(0xffffffff >> 1) - 1;
    short c = 0xffff >> 1;

    cout << "a = " << a << ", and a + 1 = " << a + 1 << endl;
    cout << "b = " << b << ", and b - 1 = " << b - 1 << endl;
    cout << "c = " << c << ", and c + 1 = " << (short)(c + 1) << endl;
}