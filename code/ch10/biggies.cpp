// io
#include <iostream>
#include <cstdio>
#include <cstdlib>

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

void biggies(vector<string> svec, vector<string>::size_type sz) {
    auto end = partition(svec.begin(), svec.end(), [sz](const string &s) {
        return s.size() >= sz;
    });

    cout << "biggies than " << sz << ": " << endl;
    auto cur = svec.begin();
    while (cur != end) 
        cout << *cur++ << " ";
    cout << endl;
}

int main(int argc, const char *argv[]) {
    size_t sz = atoi(argv[1]);
    vector<string> svec;

    string buf;
    while (cin >> buf)
        svec.push_back(buf);

    for (const string &s : svec)
        cout << s << " ";
    cout << endl;

    biggies(svec, sz);

    return 0;
}