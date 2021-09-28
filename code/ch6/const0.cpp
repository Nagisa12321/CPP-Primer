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

const string &shorterString(const string &s1, const string &s2) {
    cout << "const string &shorterString(const string &s1, const string &s2)" << endl;
    return s1.size() < s2.size() ? s1 : s2;
}

string &shorterString(string &s1, string &s2) {
    cout << "string &shorterString(string &s1, string &s2)" << endl;
    return const_cast<string &>(
        shorterString(const_cast<const string &>(s1),
                      const_cast<const string &>(s2)));
}

int main() {
    string s1 = "hello";
    const string s2 = "world";

    shorterString(s1, s2);
    return EXIT_SUCCESS;
}