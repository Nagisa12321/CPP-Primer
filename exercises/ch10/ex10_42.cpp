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
    istream_iterator<string> iter(cin), eof;
    ostream_iterator<string> iter_o(cout, " ");
    list<string> lst(iter, eof);

    cout << "before: " << endl;
    copy(lst.begin(), lst.end(), iter_o);
    lst.sort();
    lst.unique();
    lst.sort([](const string &s1, const string &s2) {
        return s1.size() < s2.size();
    });
    cout << "\nafter: " << endl;
    copy(lst.begin(), lst.end(), iter_o);

    return 0;
}