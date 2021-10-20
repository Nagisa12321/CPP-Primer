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
    unordered_map<string, int> map;
    
    string s;
    while (cin >> s)
        ++map[s];
    
    // for (auto entry : map)
    //     cout << entry.first << " -> "
    //          << entry.second << endl;

    return 0;
}