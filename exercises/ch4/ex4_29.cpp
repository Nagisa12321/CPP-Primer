#include <iostream>
#include <vector>   

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;

int main() {
    int x[10]; int *p = x;

    cout << sizeof(x) / sizeof(*x) << endl; // 10
    cout << sizeof(p) / sizeof(*p) << endl; // 2
}