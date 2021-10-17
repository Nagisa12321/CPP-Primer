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

bool check_size(const string &s, string::size_type sz) { return s.size() < sz; }

int main(int argc, char *argv[]) {
    vector<string> svec;
    string::size_type sz;
    sz = atoi(argv[1]);

    string buf;
    while (cin >> buf) 
        svec.push_back(buf);

    cout << "\nbefore partition: " << endl;
    for (const string &s : svec)
        cout << s << " ";
    cout << endl;

    auto it = partition(svec.begin(), svec.end(), bind(check_size, placeholders::_1, sz));

    cout << "\nafter partition: " << endl;
    auto cur = svec.begin();
    while (cur != it) 
        cout << *cur++ << " ";
    return 0;
}