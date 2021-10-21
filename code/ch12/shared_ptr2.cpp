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

void process(shared_ptr<int> p) {
    *p = 2048;
}

int main() {
    int *x = new int(1024);
    process(shared_ptr<int>(x));
    cout << *x << endl;
    return 0;
}