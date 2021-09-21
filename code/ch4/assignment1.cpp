#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    int ival, jval;
    ival = jval = 1024;
    // first: jval <--- 1024
    // then:  ival <--- jval

    cout << ival << endl;
    cout << jval << endl;
}