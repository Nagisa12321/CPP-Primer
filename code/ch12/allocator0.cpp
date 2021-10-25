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

// memory
#include <memory>

using namespace std;

int main() {
    int n = 10;
    string *const p = new string[n];
    string s;
    string *q = p;
    while (cin >> s && q != p + n)
        *q++ = s;
    const size_t sz = q - p;
    delete[] p;
    return 0;
}