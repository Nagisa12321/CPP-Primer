// io
#include <iostream>
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

using namespace std;

int main() {
    vector<double> dvec{3.14, 3.14};
    auto sum = accumulate(dvec.begin(), dvec.end(), 0);

    cout << sum << endl;
    return 0;
}