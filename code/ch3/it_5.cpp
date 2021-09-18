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
    vector<string> sv;
    string cur;
    while (cin >> cur) {
        sv.push_back(cur);
    }

    for (vector<string>::iterator it = sv.begin(); it != sv.end(); it++) {
        it->empty();
    }
}