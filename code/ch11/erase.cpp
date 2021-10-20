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

    auto it = m.begin();
    ++it;

    m.erase(it, m.end());

    for (auto entry : m) 
        cout << entry.first << ": "
             << entry.second << endl;

    m["f"] = 123;
    m.erase("a");

    for (auto entry : m) 
        cout << entry.first << ": "
             << entry.second << endl;

    multimap<string, int> mm;
    for (int i = 0; i < 10000; ++i) 
        mm.insert({"hello world", 123});
    cout << mm.erase("hello world") << endl;
    return 0;
}