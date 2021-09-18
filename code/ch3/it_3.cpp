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
    string s = "some string";

    for (string::iterator it = s.begin(); it != s.end(); ++it) {
        *it = toupper(*it);
    }

    cout << s << endl;
}