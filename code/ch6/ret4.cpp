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
using std::begin;
using std::end;
using std::map;

char &get_value(string &str, size_t ix) {
    return str[ix];
}

int main() {
    string s = "a value";
    cout << s << endl;
    get_value(s, 2) = 'V';
    cout << s << endl;
    return 0;
}