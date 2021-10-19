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
    map<string, size_t> word_count; // empty;
    set<string> exclde = {"hello", "world"};
    for (const string &s : exclde)
        cout << &s << endl;

    map<string, string> authors = {
            {"Joyce", "James"},
            {"Austen", "Jane"},
            {"Dickens", "Charles"}
    };
    return 0;
}