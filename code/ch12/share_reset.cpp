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
    shared_ptr<int> p1 = make_shared<int>(42);
    shared_ptr<int> p2(p1);
    cout << "p1.count: " << p1.use_count() << ", " << p1.unique() << endl;
    cout << "p2.count: " << p2.use_count() << ", " << p2.unique() << endl;
    p1.reset(new int(1024));
    cout << "p1.count: " << p1.use_count() << ", " << p1.unique() << endl;
    cout << "p2.count: " << p2.use_count() << ", " << p2.unique() << endl;
    return 0;
}