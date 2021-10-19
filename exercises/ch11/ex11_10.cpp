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

int main() {
    map<vector<int>::iterator, int> m1;
    map<list<int>::iterator, int> m2;

    vector<int> v;
    list<int> l;

    m1[v.begin()] = 0;
    m2[l.begin()] = 1;
    return 0;
}