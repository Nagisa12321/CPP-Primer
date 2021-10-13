#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

int main() {
    char noNull[] = { 'H', 'i' };
    const char *cp = "hello world!!!";

    string s1(cp);
    cout << s1 << endl; 
    
    string s2(noNull, 2);
    cout << s2 << endl;

    // string s3(noNull);
    // cout << s3 << endl;

    string s4(cp + 6, 5);
    cout << s4 << endl;

    string s5(s1, 6, 5);
    cout << s5 << endl;

    string s6(s1, 6, 20);
    cout << s6 << endl;

    // 'std::out_of_range'
    // string s7(s1, 16);
    // cout << s7 << endl;
    return 0;
}