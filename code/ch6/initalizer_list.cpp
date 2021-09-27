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
using std::initializer_list;

void error_msg(initializer_list<string> il) {
    for (auto beg = il.begin(); beg != il.end(); ++beg) 
        cout << *beg << " ";
    cout << endl;
}

int main() {
    string expect = "hello";
    string actual = "hello";
    if (expect != actual) 
        error_msg({"functionX", expect, actual});
    else 
        error_msg({"functionX", "ok"});
    return 0;
}