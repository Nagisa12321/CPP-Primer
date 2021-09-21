#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    vector<string> text;

    // ....

    for (const string &s : text) {
        cout << s;
        if (s.empty() || s[s.size() - 1] == '.')
            cout << endl;
        else 
            cout << " ";
    }

    return 0;
}