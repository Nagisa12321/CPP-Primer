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
    vector<pair<string, int>> pvec;
    string word;
    int i;
    while (cin >> word >> i) 
        pvec.push_back({word, i});

    for (pair<string, int> p : pvec)
        cout << p.first << ", " << p.second << endl;
    return 0;
}