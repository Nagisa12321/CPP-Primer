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
    int sz = 10;
    shared_ptr<int> sp0(new int[sz](), [](int *p) { delete [] p; });
    shared_ptr<int> sp1(sp0);
    sp1.get()[5] = 1024;
    for (int i = 0; i < sz; ++i)
        cout << sp0.get()[i] << " ";
    cout << endl;
    return 0;
}