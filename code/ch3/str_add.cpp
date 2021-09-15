#include <iostream>
#include <sys/types.h>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    string s1 = "hello", s2 = "world\n";
    string s3 = s1 + ", " + s2 + '\n';
    string s4 = s1 + ", ";
    // string s5 = "hello, " + "world";
    string s6 = (s1 + ", ") + "world";
    // string s7 = s1 + ", " + "world";
}