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

#include <iterator>

using namespace std;

int main() {
    istream_iterator<int> int_it(cin);
    istream_iterator<int> int_eof;

    vector<int> vec;
    while (int_it != int_eof) 
        vec.push_back(*int_it++);

    for (int i : vec)
        cout << i << " ";
    cout << endl;
    return 0;
}