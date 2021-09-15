#include <iostream>
#include <sys/types.h>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    string sum, cur;
    while (cin >> cur) {
        sum += cur + ' ';
    }
    cout << sum << endl;
}