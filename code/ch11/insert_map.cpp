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

void show(const map<string, int> &m) {
    for (const auto &entry : m) 
        cout << entry.first << " -> "
             << entry.second << endl;
}

int main() {
    map<string, int> m{
        {"a", 1},
        {"b", 2},
        {"c", 3}
    };

    pair<map<string, int>::iterator, bool> p = m.insert({"a", 19024});
    cout << (p.first == m.end()) << endl;
    cout << p.first->first << ", " << p.first->second << endl;
    cout << p.second << endl;
    show(m);

    m["a"] = 19024;
    show(m);
    return 0;
}