#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

int main() {
    string s1 = "hello world";
    s1.insert(s1.size(), 5, '#');
    cout << s1 << endl;

    string s2 = "hello world";
    s2.erase(s2.size() - 3, 3);
    cout << s2 << endl;

    vector<char> v = { 'h', 'e', 'l', 'l', 'o' };
    string s3;
    s3.assign(v.begin(), v.end());
    cout << s3 << endl;

    const char *cp = "Stately, plump Buck";
    string s4;
    s4.assign(cp, 7);
    cout << s4 << endl;

    s4.insert(s4.size(), cp + 7);
    cout << s4 << endl;
    
    return 0;
}