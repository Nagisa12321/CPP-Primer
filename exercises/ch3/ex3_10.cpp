#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    string str;
    getline(cin, str);
    for (char c : str) {
        if (!ispunct(c))
            cout << c;
    }
    cout << endl;
}