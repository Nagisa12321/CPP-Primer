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
    int l = 0, r = l + sz;

    while (r <= s.size()) {
        string tmp = s.substr(l, sz);
        if (tmp == oldVal) {
            s.erase(l, sz);
            s.insert(l, newVal);
            l += nsz;
            r += nsz;
        } else {
            ++l;
            ++r;
        }
    }
}

int main() {
    string s = "hello wolrd";
    str_replace(s, "ll", "hello");
    cout << s << endl;
    return 0;
}