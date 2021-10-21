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

shared_ptr<vector<int>> make_vector() {
    return make_shared<vector<int>>();
}

void vector_in(shared_ptr<vector<int>> vec) {
    int i;
    while (cin >> i)
        vec->push_back(i);
}

void vector_show(const shared_ptr<vector<int>> vec) {
    for (int i : *vec)
        cout << i << " ";
    cout << endl;
}

int main() {
    shared_ptr<vector<int>> ivec = make_vector();
    vector_in(ivec);
    vector_show(ivec);
    return 0;
}