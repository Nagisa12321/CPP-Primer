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
    shared_ptr<list<int>> p2;
    cout << p1 << endl;

    shared_ptr<int> p3 = make_shared<int>(42);
    shared_ptr<string> p4 = make_shared<string>(10, '9');
    shared_ptr<int> p5 = make_shared<int>();
    cout << p3 << ": " << *p3 << endl;
    cout << p4 << ": " << *p4 << endl;
    cout << p5 << ": " << *p5 << endl;
    return 0;
}