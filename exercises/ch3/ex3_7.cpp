#include <iostream>
#include <sys/types.h>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    string hello = "Hello, World!";
    cout << hello << endl;
    for (char c : hello) {
        c = 'X';
    }

    // nothing will happen
    cout << hello << endl;
}