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
    unique_ptr<int[]> up(new int[10]());
    for (int i = 0; i < 10; ++i)
        cout << up[i] << " ";
    cout << endl;

    unique_ptr<vector<int>> up1(new vector<int>(10));
    for (int i = 0; i < 10; ++i)
        cout << (*up1)[i] << " ";
    cout << endl;
    return 0;
}