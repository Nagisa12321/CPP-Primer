#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    vector<string> v;
    string cur;

    while (cin >> cur) {
        v.push_back(cur);
    }
}