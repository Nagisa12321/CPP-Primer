#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;

int get_value() {
    return rand() % 1000;
}

int main() {
    // int i = get_value();
    // while (i != 42) {
    //     cout << i << endl;
    //     i = get_value();
    // }
    // cout << i << endl;

    int i;
    while ((i = get_value()) != 42) {
        cout << i << endl;
    }
    cout << i << endl;
}