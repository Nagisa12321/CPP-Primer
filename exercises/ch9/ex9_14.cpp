#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>
#include <vector>
#include <list>

using namespace std;

int main() {
    list<const char *> li = {"hello", "world"};

    vector<string> v(li.begin(), li.end());
    for (const string &s : v)
        cout << s << endl;
    return 0;
}