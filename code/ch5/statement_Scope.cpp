#include <iostream>
#include <vector>
#include <cstdio>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;

int get_num() {
    return 1024;
}

int main() {
    while (int i = get_num()) {
        cout << i << endl;
    }

    // out bound the statement scope!
    // i = 0;
}