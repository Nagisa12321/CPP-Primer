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
    unique_ptr<int> p1(new int(42));
    unique_ptr<int> p2 = p1;
    /*
        ex12_16.cpp: In function ‘int main()’:
        ex12_16.cpp:29:26: error: use of deleted function ‘std::unique_ptr<_Tp, _Dp>::unique_ptr(const std::unique_ptr<_Tp, _Dp>&) [with _Tp = int; _Dp = std::default_delete<int>]’
        29 |     unique_ptr<int> p2 = p1;
            |                          ^~
        In file included from /usr/include/c++/10/memory:83,
                        from ex12_16.cpp:23:
        /usr/include/c++/10/bits/unique_ptr.h:468:7: note: declared here
        468 |       unique_ptr(const unique_ptr&) = delete;
            |       ^~~~~~~~~~
    */
    return 0;
}