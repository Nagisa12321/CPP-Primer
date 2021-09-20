#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::begin;
using std::end;

int main() {
    string str = "bye~";
    string str2 = "!";
    const char *c_str0 = str.c_str();

    cout << c_str0 << endl;
    str = "hello world~~";
    cout << c_str0 << endl;
}