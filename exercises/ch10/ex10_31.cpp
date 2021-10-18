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
    ostream_iterator<int> int_it_o(cout, " ");
    vector<int> ivec(int_it, int_eof);
    sort(ivec.begin(), ivec.end());
    unique_copy(ivec.begin(), ivec.end(), int_it_o);
    return 0;
}