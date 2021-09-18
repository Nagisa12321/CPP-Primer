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
    vector<int> v;
    int cur;

    while (cin >> cur) {
        v.push_back(cur);
    }

    vector<int>::iterator cur_it = v.begin();
    vector<int>::iterator end = v.end();

    while (cur_it != end) {
        cout << *(cur_it++) << endl;
    }
}