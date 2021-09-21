#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

bool test(int a, int b, int c, int d) {
    return a > b && b > c && c > d;
}

int main() {
    cout << test(1, 2, 3, 4) << endl;
    cout << test(1, 3, 2, 5) << endl;
    cout << test(4, 3, 2, 1) << endl;
}