#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    vector<string> v;
    string s;
    while (cin >> s) {
        v.push_back(s);
    }

    for (string &str : v) {
        for (char &c : str) {
            if (islower(c))
                c = toupper(c);
        }
    }

    for (string &str : v) {
        cout << str << " ";
    }
    cout << endl;
}