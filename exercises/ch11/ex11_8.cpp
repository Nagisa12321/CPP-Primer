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
// O(n)
int main() {
    istream_iterator<string> str_it(cin), str_eof;
    vector<string> svec(str_it, str_eof);

    set<string> s(svec.begin(), svec.end());
    sort(svec.begin(), svec.end());
    auto it = unique(svec.begin(), svec.end());

    cout << s.size() << endl;
    cout << it - svec.begin() << endl;
    return 0;
}