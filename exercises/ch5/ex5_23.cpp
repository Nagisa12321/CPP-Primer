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
using std::runtime_error;

int main() {
    cout << "Please input 2 numbers" << endl;
    int i1, i2;
    try {
        if (!(cin >> i1 >> i2) || i2 == 0)
            throw runtime_error("i1, i2 should be number, and i2 should not be zero");
    } catch (runtime_error e) {
        cout << e.what() << endl;
        cout << "restart?(y/n) " << endl;
        string s;
        cin >> s;
        if (s == "y")
            main();
        return 0;
    }
    cout << i1 / i2 << endl;
    return 0;
}