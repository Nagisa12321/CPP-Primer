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
    const char chs1[] = "hello, ";
    const char chs2[] = "world!";

    char chs[20];
    strcat(chs, chs1);
    strcat(chs, chs2);

    cout << chs << endl;
}