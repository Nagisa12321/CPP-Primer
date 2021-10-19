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
    set<int> iset;
    for (int i = 0; i < 10; ++i)
        iset.insert(i);
    
    set<int>::iterator sit = iset.begin();
    while (sit != iset.end())
        cout << *sit++ << endl;
    return 0;
}