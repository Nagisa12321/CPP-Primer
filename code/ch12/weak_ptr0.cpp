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
    vector<shared_ptr<int>> *vec = new vector<shared_ptr<int>>(); 
    vec->push_back(make_shared<int>(24));
    weak_ptr<int> wp((*vec)[0]);
    // shared_ptr<int> tmp((*vec)[0]);

    if (shared_ptr<int> sp = wp.lock()) {
        cout << *sp << endl;
    }
    cout << wp.use_count() << endl;
    delete vec;
    cout << wp.use_count() << endl;
    if (shared_ptr<int> sp = wp.lock()) {
        cout << *sp << endl;
    }
    return 0;
}