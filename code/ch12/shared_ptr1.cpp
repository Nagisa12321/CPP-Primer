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
    shared_ptr<int> q(new int(42));
    cout << q.use_count() << endl;

    shared_ptr<int> p(q);
    cout << p.use_count() << endl;
    cout << q.use_count() << endl;

    return 0;
}