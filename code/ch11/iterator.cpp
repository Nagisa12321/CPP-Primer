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

    map<string, int>::iterator map_it = m.begin();
    cout << map_it->first << " "
         << map_it->second << endl;

    map_it->second = 1024;

    for (auto it : m)
        cout << it.first << ", "
             << it.second << endl;

    return 0;
}