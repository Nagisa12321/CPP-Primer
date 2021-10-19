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
    // vector
    vector<int> ivec;
    for (int i = 0; i < 10; ++i)
        ivec.push_back(i);
    
    // list
    list<int> lst;
    for (int i = 0; i < 10; ++i)
        lst.push_front(i);

    // .....
    return 0;
}