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
    map<string, int> m{
        {"a", 1},
        {"b", 2},
        {"c", 3}
    };

    map<string, int>::iterator iter = m.begin(); 
    iter->second = 123;

    for (auto p : m)
        cout << p.first << " -> "
             << p.second << endl;
    return 0;
}