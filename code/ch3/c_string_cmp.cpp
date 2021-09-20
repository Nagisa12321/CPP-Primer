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
    string s1 = "A string example";
    string s2 = "A different string";
    cout << (s1 > s2) << endl;

    const char ca1[] = "A string example";
    const char ca2[] = "A different string";
    // compare with two address!!!
    // cout << (ca1 > ca2) << endl;

    cout << strcmp(ca1, ca2) << endl;
}