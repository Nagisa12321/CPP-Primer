#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    string s1 = "hello, world";
    string s2 = "hello, world";

    int i = 0;
    while (i < s1.size()) {
        s1[i++] = 'X';
    }

    for (int i = 0; i < s2.size(); i++) {
        s2[i] = 'X';
    }

    cout << s1 << endl;
    cout << s2 << endl;
}