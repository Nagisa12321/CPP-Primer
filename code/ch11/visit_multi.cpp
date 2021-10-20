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

    size_t entires = mm.count("a");
    multimap<string, string>::iterator it = mm.find("a");
    while (entires--) {
        cout << it->first << " -> "
             << it->second << endl;
        ++it;
    }
    return 0;
}