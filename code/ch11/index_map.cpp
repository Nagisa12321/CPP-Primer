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
    map<string, int> m;
    cout << m.size() << endl;
    cout << m["a"] << endl;
    cout << m.size() << endl;

    multimap<string, int> mm;
    mm.insert({"a", 1});
    mm.insert({"a", 2});

    return 0;
}