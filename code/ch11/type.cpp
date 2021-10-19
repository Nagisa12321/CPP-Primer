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
    set<string>::value_type v1; // string
    set<string>::key_type v2;   // string
    map<string, int>::value_type v3;    // pair<const string, int> 
    map<string, int>::key_type v4;      // string
    map<string, int>::mapped_type v5;   // int

    return 0;
}