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
    vector<string> b1;
    {
        vector<string> b2{"a", "an", "the"};
        b1 = b2;
    }
    for (const string &s : b1)
        cout << s << " ";
    cout << endl;
    return 0;
}