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
    map<string, size_t> map;
    istream_iterator<string> iit(cin), eof;
    for_each(iit, eof, [&](string s) { 
        for (char &c : s)
            c = tolower(c);
        ++map[s]; 
    });
    for (pair<string, size_t> entry : map)
        cout << entry.first
             << " -> "
             << entry.second
             << endl;
    return 0;
}