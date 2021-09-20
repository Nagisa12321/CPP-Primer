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
    string s1 = "hello";
    string s2 = "world";
    string largeStr = s1 + " " + s2;
    cout << largeStr << endl;

    const char chs1[] = "hello";
    const char chs2[] = "world";
    char largeChs[10];

    strcpy(largeChs, chs1);
    strcat(largeChs, " ");
    strcat(largeChs, chs2);
    cout << largeChs << endl;
}