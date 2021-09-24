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
    do {
        cout << "Please input 2 strings: " << endl;
        string s1, s2;
        if (cin >> s1 >> s2) {
            cout << "Shorter: " << ((s1.size() > s2.size()) ? s2 : s1)
                                << endl; 
        }
    } while (cin);
    return 0;
}