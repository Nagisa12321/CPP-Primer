#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

int main() {
    string s = "C++ Primer", s2 = s;
    s.insert(s.size(), " 4th Ed.");
    s2.append(" 5th Ed.");

    cout << s << endl;
    cout << s2 << endl;

    s.erase(11, 3);
    cout << s << endl;
    s.insert(11, "5th");
    cout << s << endl;

    s2.replace(11, 3, "20th");
    cout << s2 << endl;
    return 0;
}