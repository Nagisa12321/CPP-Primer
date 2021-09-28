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

string &ret_ref() {
    string ret = "hello world";
    return ret;
}


int main() {
    string &ref = ret_ref();
    cout << "ref=" << ref << endl;
    return 0;
}