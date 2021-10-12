#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {100, 99, 98};

    vector<int>::iterator i1 = v1.begin();
    vector<int>::iterator i2 = v2.begin();

    swap(v1, v2);
    
    while (i1 != v2.end()) 
        cout << *i1++ << " ";
    cout << endl;

    while (i2 != v1.end()) 
        cout << *i2++ << " ";
    cout << endl;

    cout << " ----------- " << endl;

    string s1 = "hello";
    string s2 = "world";
    string::iterator si1 = s1.begin();
    string::iterator si2 = s2.begin();

    swap(s1, s2);
    cout << s1 << endl;
    cout << s2 << endl;

    while (si1 != s2.end())
        cout << *si1++;
    cout << endl;

    while (si2 != s1.end())
        cout << *si2++;
    cout << endl;
    return 0;
}