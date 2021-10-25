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
    auto p = new int();
    auto sp = make_shared<int>();
    process(sp);    // sp = 42
    // process(new int());  // error
    // process(p)           // error
    process(shared_ptr<int>(p)); // delete p;
    return 0;
}