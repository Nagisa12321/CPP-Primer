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

string strs[10];

string (&ret_ref_0(string (&)[10]))[10];

decltype(strs) &ret_ref_1(string (&)[10]);

auto ret_ref_2(string (&)[10]) -> string (&)[10];

int main() {
    return EXIT_SUCCESS;
}