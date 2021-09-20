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
    string s1 = "A string";
    string s2 = "A different string";
    const char chs1[] = "A string";
    const char chs2[] = "A different string";

    cout << (s1 > s2) << endl;
    cout << (strcmp(chs1, chs2) > 0) << endl;
}