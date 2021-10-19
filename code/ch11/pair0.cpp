// io
#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <cstdio>

// containers
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <vector>
#include <forward_list>

// algorithm
#include <algorithm>
#include <iterator>
#include <numeric>

using namespace std;

pair<string, int> process(vector<string> &v) {
    if (!v.empty())
        return {v.back(), v.back().size()};
    return pair<string, int>();
}

int main() {
    vector<string> v1 = {"hello", "world"};
    pair<string, int> p1 = process(v1);
    cout << p1.first << ", " << p1.second << endl;

    vector<string> v2;
    pair<string, int> p2 = process(v2);
    cout << p2.first << ", " << p2.second << endl;
    
    return 0;
}