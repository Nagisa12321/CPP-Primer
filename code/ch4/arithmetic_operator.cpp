#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int i = 1024;
    int k = -i;     // -1024;
    bool b = true;
    bool b2 = -b;   // true!

    cout << k << endl;
    cout << b2 << endl;
}