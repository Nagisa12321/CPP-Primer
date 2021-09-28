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

string *ret_pointer() {
    string ret = "Hello world";
    return &ret;
}

int main() {
    string *p = ret_pointer();
    cout << "p = " << (void *)p << endl;
    return 0;
}