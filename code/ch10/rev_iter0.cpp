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

using namespace std;

int main() {
    string line = "hello,world,my,name,is,jt_chen";
    string first_word(line.cbegin(), find(line.cbegin(), line.cend(), ','));
    string last_word(find(line.crbegin(), line.crend(), ',').base(), line.cend());
    cout << first_word << endl;
    cout << last_word << endl;
    return 0;
}