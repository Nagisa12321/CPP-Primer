// io
#include <iostream>
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

using namespace std;

int main() {
    vector<string> svec;

    string s;
    while (cin >> s) 
        svec.push_back(s);

    for (string i : svec)
        cout << i << endl;
    
    auto nums = count(svec.begin(), svec.end(), "hello");
    cout << nums << endl;
    return 0;
}