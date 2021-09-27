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

bool containsUpper(const string &s) {
    for (char c : s) 
        if (isupper(c))
            return true;

    return false;
}

void toLower(string &s) {
    for (char &c : s) 
        if (isupper(c))
            c = tolower(c);
}

int main() {
    string s1 = "hello world!";
    string s2 = "Hello world!";
    cout << containsUpper(s1) << endl;
    cout << containsUpper(s2) << endl;

    string s3 = "HeLlO WoRlD!";
    toLower(s3);
    cout << s3 << endl;

    return 0;
}