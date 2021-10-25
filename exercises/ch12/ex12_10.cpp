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

void process(shared_ptr<int> ptr) {
    *ptr = 42;
}

int main() {
    shared_ptr<int> p = make_shared<int>(1024);
    process(shared_ptr<int>(p));
    cout << *p << endl;
    return 0;
}