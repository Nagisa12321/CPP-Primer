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
    shared_ptr<string> p1;
    cout << p1 << endl; 

    shared_ptr<string> p2 = make_shared<string>("hello");
    cout << p2 << endl;
    cout << *p2 << endl;
    cout << p2.get() << endl;
    return 0;
}