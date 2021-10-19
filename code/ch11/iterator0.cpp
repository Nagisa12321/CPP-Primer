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
    map<int, int> m;
    for (int i = 0; i < 10000000; ++i) 
        m[rand() % 100]++;
    
    map<int, int>::iterator map_it = m.begin();
    while (map_it != m.end()) {
        cout << map_it->first << " -> "
             << map_it->second << endl;
        ++map_it;
    }
    return 0;
}