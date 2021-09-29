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

int main() {
    string a = "hello";
    string b = "hi";

    func *f = lengthCompare;
    cout << f(a, b) << endl;

    funcp fp = lengthCompare;
    cout << fp(a, b) << endl;
    return EXIT_SUCCESS;
}