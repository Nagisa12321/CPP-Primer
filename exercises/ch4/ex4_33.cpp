#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;

int main() {
    int x = 0, y = 0;
    false ? ++x, ++y : --x, --y;
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
}