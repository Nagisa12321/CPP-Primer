#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

void str_replace(string &s, const string &oldVal, const string &newVal) {
    if (s.size() < oldVal.size())
        return;
    
    int sz = oldVal.size();
    int nsz = newVal.size();
    for (int i = 0; i < s.size(); ) {
        string tmp = s.substr(i, sz);
        if (tmp == oldVal) {
            s.replace(i, sz, newVal);
            i += nsz;
        } else {
            ++i;
        }
    }
}

int main() {
    string s = "hello wolrd";
    str_replace(s, "ll", "hello");
    cout << s << endl;
    return 0;
}