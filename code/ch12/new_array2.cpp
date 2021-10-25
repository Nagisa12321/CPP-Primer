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
    int *ip0 = new int[3]{100, 200, 300};
    delete ip0;

    int *ip1 = new int[3];
    for (int i = 0; i < 3; ++i)
        cout << ip1[i] << " ";
    cout << endl;
    return 0;
}