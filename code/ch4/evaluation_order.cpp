#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int num = 0;

int fun1() {
    num = 1;
    return 1;
}

int fun2() {
    num = 2;
    return 2;
}

int main() {
    int i = fun1() + fun2();

    cout << i << endl;
    cout << num << endl;
}