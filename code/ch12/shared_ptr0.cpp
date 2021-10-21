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
    shared_ptr<int> p = make_shared<int>(42);
    int *ip = p.get();
    cout << ip << ": " << *ip << endl;
    shared_ptr<int> q = make_shared<int>(52);
    p = q;
    cout << ip << ": " << *ip << endl;
    *ip = 555;
    cout << ip << ": " << *ip << endl;
    shared_ptr<int> r = make_shared<int>(1024);
    cout << ip << ": " << *ip << endl;
    cout << r << ": " << *r << endl;
    return 0;
}   