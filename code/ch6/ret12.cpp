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

string s = "hello";
auto ret_str() -> string * {
    return &s;
}

int main() {
    return EXIT_SUCCESS;
}