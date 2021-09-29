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

bool lengthCompare(const string &, const string &);

int main() {
    bool (&pf)(const string &, const string &) = lengthCompare;
    string a = "hello";
    string b = "hell";

    return EXIT_SUCCESS;
}

bool lengthCompare(const string &s1, const string &s2) {
    return s1.size() > s2.size();
}
