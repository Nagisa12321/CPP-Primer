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

using namespace std;

int main(int argc, char *argv[]) {
    vector<string> svec;
    string::size_type sz;
    sz = atoi(argv[1]);

    string buf;
    while (cin >> buf) 
        svec.push_back(buf);

    sort(svec.begin(), svec.end(), [](const string &s1, const string &s2) {
        return s1.size() < s2.size();
    });
    cout << "\nbefore partition: " << endl;
    for (const string &s : svec)
        cout << s << " ";
    cout << endl;

    auto it = stable_partition(svec.begin(), svec.end(), [sz](const string &s) {
        return s.size() >= sz;
    });

    cout << "\nafter partition: " << endl;
    auto cur = svec.begin();
    while (cur != it) 
        cout << *cur++ << " ";
    return 0;
}