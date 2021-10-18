// io
#include <iostream>
#include <cstdlib>
#include <cstdio>

// containers
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <vector>
#include <forward_list>

// algorithm
#include <algorithm>
#include <numeric>

#include <iterator>
using namespace std;

int main() {
    istream_iterator<int> int_it(cin), int_eof;
    cout << accumulate(int_it, int_eof, 0) << endl;
    return 0;
}