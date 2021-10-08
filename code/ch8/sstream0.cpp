#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>
#include <sstream>

using namespace std;

int main() {
    string s = "hello world";
    stringstream strm1;
    stringstream strm2(s);

    string str1 = strm1.str();
    string str2 = strm2.str();
    cout << str1.empty() << ": " << str1 << endl;
    cout << str2.empty() << ": " << str2 << endl;

    strm1.str("hi~");
    str1 = strm1.str();
    str2 = strm2.str();
    cout << str1.empty() << ": " << str1 << endl;
    cout << str2.empty() << ": " << str2 << endl;
    return 0;
}