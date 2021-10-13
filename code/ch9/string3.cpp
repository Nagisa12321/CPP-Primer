#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

int main() {
    string s = "some string", s2 = "some other string";
    s.insert(0, s2 + ' ', 0, s2.size() + 1);
    cout << s << endl;
    return 0;
}