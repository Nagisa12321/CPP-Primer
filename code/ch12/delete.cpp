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

using namespace std;

int main() {
    int *ip1 = new int(10);
    cout << ip1 << ": " << *ip1 << endl;
    delete ip1;
    cout << ip1 << ": " << *ip1 << endl;
    int *ip2 = new int(123);
    cout << ip1 << ": " << *ip1 << endl;

    return 0;
}