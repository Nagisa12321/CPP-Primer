#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;

int main() {
    int i; 
    double d;

    d = i = 3.5;    // d == 3 and i == 3
    cout << "d == " << d << " and i == " << i << endl;

    i = d = 3.5;    // d == 3.5 and i == 3
    cout << "d == " << d << " and i == " << i << endl;
}