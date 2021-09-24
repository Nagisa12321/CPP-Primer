#include <iostream>
#include <vector>
#include <cstdio>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;
using std::map;

int main() {
    string last, cur;
    bool same = false;
    while (cin >> cur) {
        if (cur == last) {
            same = true;
            break;
        }

        last = cur;
    }
    if (same) {
        cout << "the same word is " << cur << endl;
    } else {
        cout << "nothing same." << endl; 
    }
    return 0;
}