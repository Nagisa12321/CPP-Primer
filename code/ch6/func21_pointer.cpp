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

bool lengthCompare(const string &s1, const string &s2) {
    return s1.size() > s2.size();
}
typedef bool func(const string &, const string &);
typedef bool (*funcp)(const string &, const string &);

bool exec(string &s1, string &s2, func fn) {
    return fn(s1, s2);
}

int main() {
    string s1 = "hello";
    string s2 = "hi";

    cout << exec(s1, s2, lengthCompare) << endl;
    return EXIT_SUCCESS;
}