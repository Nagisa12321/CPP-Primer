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
    set<int> iset{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto it1 = iset.find(1);
    cout << *it1 << endl;

    auto it2 = iset.find(11);
    cout << (it2 == iset.end()) << endl;

    cout << iset.count(0) << endl;
    cout << iset.count(11) << endl;
    return 0;
}