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
    multimap<string, string> mm{
        {"a", "a"},
        {"a", "b"},
        {"a", "c"},
        {"c", "c"},
        {"d", "c"},
        {"b", "a"},
        {"a", "123"},
    };

    pair<multimap<string, string>::iterator, 
         multimap<string, string>::iterator> range = mm.equal_range("a");

    for (multimap<string, string>::iterator cur = range.first; 
                cur != range.second; ++cur)
        cout << cur->first << " -> "
             << cur->second << endl;
    return 0;
}