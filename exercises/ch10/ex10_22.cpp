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

bool is_shorter(const string &s, string::size_type sz) { return s.size() < sz; }

int main(int argc, char *argv[]) {
    string::size_type sz = atoi(argv[1]);
    vector<string> svec;

    string buf;
    while (cin >> buf) 
        svec.push_back(buf);

    auto cnt = count_if(svec.begin(), svec.end(), bind(is_shorter, placeholders::_1, sz));
    cout << cnt;
    return 0;
}