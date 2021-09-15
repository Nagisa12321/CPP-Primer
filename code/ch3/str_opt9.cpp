#include <iostream>
#include <sys/types.h>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    string s1 = "hello";
    string s2 = s1 + (char)100;
    cout << s2 << endl;
}