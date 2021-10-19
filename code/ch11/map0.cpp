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
    map<string, size_t> word_count;
    string word;
    istream_iterator<string> iit(cin), eof;
    for_each(iit, eof, [&](const string &s) { ++word_count[s]; });
    for (const pair<string, size_t> &entry : word_count) {
        cout << entry.first << " occurs " 
             << entry.second << " times." 
             << endl;
    }
    return 0;
}