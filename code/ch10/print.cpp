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

ostream &print(ostream &os, const string &s, char c) {
    os << s << c;
    return os;
}

int main() {
    vector<string> svec;

    string buf;
    while (cin >> buf) 
        svec.push_back(buf);

    for_each(svec.begin(), svec.end(), bind(print, ref(cout), placeholders::_1, ' '));
        
    return 0;
}