#include <iostream>

using std::cin;
using std::cout;
using std::endl;

bool even(int num) {
    return num % 2 == 0;
} 

int main() {
    cout << even(1) << endl;
    cout << even(2) << endl;
    cout << even(3) << endl;
}