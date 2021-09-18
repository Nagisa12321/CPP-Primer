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

    while (getline(cin, cur)) {
        v.push_back(cur);
    }

    for (auto it = v.begin(); it != v.end(); it++) {
        for (auto cit = it->begin(); cit != it->end(); cit++) {
            if (isalpha(*cit)) {
                *cit = toupper(*cit);
            }
        }
        cout << *it << endl;
    }
}