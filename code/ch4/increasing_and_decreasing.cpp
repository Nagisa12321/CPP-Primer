#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    int i = 0, j;
    j = ++i;    // i += 1; j = i;
    cout << j << endl;
    j = i++;    // j = i; i += 1;
    cout << j << endl;
}
