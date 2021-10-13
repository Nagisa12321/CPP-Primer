#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

int main() {
    char cstr[] = "hello world!\n";
    string str = "hello wolrd!\n";
    string s0(cstr, 5);
    cout << s0 << endl;
    string s1(str, 5);
    cout << s1 << endl;
    string s3(str, 0, 6);
    cout << s3 << endl;
    return 0;
}