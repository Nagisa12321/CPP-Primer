#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

int main() {
    string s = "hello world";

    string s2 = s.substr(0, 5);
    cout << s2 << endl;

    string s3 = s.substr(6, 5);
    cout << s3 << endl;

    string s4 = s.substr(6);
    cout << s4 << endl;

    string s5 = s.substr(6, 100);
    cout << s5 << endl;

    string s6 = s.substr(s.size() + 1);
    cout << s6 << endl;
    return 0;
}