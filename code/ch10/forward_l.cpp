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
    forward_list<int> lst0{1, 3, 5, 7, 9};
    forward_list<int> lst1{2, 4, 6, 8, 10};
    ostream_iterator<int> oit(cout, " ");
    merge(lst0.begin(), lst0.end(), 
          lst1.begin(), lst1.end(), 
          oit);
    cout << endl;
    lst0.merge(lst1);
    copy(lst0.begin(), lst0.end(), oit);
    cout << endl;
    cout << (lst1.empty()) << endl;

    return 0;
}