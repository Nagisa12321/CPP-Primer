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
#include <cstring>
// memory
#include <memory>

using namespace std;

int main() {
    int sz = 2;
    char *c_str = new char[sz];
    string s;
    while (cin >> s) {
        if (s.size() + 1 > sz) {
            delete [] c_str;
            sz = s.size() + 1;
            printf(" => grow to %d\n", sz);
            c_str = new char[sz];
        }
        strcpy(c_str, s.c_str());
        printf(" -> %s\n", c_str);
    }
    delete [] c_str;
    return 0;
}