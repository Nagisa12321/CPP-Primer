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
    istream_iterator<string> str_it(cin), str_eof;
    ostream_iterator<string> str_it_o(cout, " ");
    vector<string> svec(str_it, str_eof);
    copy(svec.begin(), svec.end(), str_it_o);
    return 0;
}