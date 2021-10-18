// io
#include <iostream>
#include <cstdlib>
#include <cstdio>

// containers
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <vector>
#include <forward_list>

// algorithm
#include <algorithm>
#include <numeric>

// stream
#include <iterator>
#include <fstream>
using namespace std;

int main() {
    istream_iterator<int> int_it(cin);
    istream_iterator<int> int_eof;

    ifstream in("./Sales_item.h");
    istream_iterator<string> str_it(in);

    return 0;
}