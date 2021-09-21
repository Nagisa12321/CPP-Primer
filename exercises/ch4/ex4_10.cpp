#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;


int main() {
    int cur;

    while (cin >> cur) {
        cout << "read the number [" << cur << "]" << endl;
        if (cur == 42) {
            cout << "will just stop" << endl;
            break;
        }
    }
}