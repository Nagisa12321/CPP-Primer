// io
#include <iostream>
#include <cstdlib>
#include <cstdio>

// containers
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <vector>
#include <forward_list>

// algorithm
#include <algorithm>
#include <numeric>

// utils
#include <functional>

using namespace std;

bool is_shorter(const string &s1, const string &s2) {
    return s1.size() < s2.size();
}

int main() {
    vector<string> svec;

    string buf;
    while (cin >> buf) 
        svec.push_back(buf);

    sort(svec.begin(), svec.end(), is_shorter);
    for (const string &s : svec)
        cout << s << " ";
    cout << endl;

    sort(svec.rbegin(), svec.rend(), bind(is_shorter, placeholders::_2, placeholders::_1));
    for (const string &s : svec)
        cout << s << " ";
    cout << endl;
    return 0;
}