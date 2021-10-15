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

    string word;
    while (cin >> word)
        svec.push_back(word);

    for (const string &s : svec)
        cout << s << " ";
    cout << endl;

    sort(svec.begin(), svec.end());

    for (const string &s : svec)
        cout << s << " ";
    cout << endl;
    return 0;
}