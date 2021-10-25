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
    unique_ptr<string> p1(new string("hello world"));
    unique_ptr<string> p2(p1.release());
    unique_ptr<string> p3(new string("world"));
    p2.reset(p3.release());
    return 0;
}