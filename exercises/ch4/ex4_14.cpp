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
    int i = 0;
    // if (42 = i) {
    //      // ... 
    // }

    if (i = 42) {
        // ....
        // will exec this 
        // i = 42
        // so i is true
        // ....
        cout << "hello" << endl;
    }
}