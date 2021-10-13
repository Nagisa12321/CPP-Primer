#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

int main() {
    int i = 42;
    string s = to_string(i);
    cout << s << endl;

    double d = stod(s);
    cout << d << endl;

    string s2 = "pi = 3.141oji";
    d = stod(s2.substr(s2.find_first_of("+-.0123456789")));
    cout << d << endl;

    d = stod("y");
    cout << d << endl;
    return 0;
}