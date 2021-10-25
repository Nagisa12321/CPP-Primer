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
    int ix = 1024, *pi = &ix, *pi2 = new int(2048);
    typedef unique_ptr<int> IntP;

    // a: error
    // IntP p0(ix);

    // b: free(): invalid pointer
    // IntP p1(pi);

    // c: good
    IntP p2(pi2);

    // d: same to b;
    // IntP p3(&ix);

    // e: good
    IntP p4(new int(2048));

    // f: double free
    // IntP p5(p2.get());
    return 0;
}