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
    int *ip1 = new int;
    int *ip2 = new int();
    cout << ip1 << ": " << *ip1 << endl;
    cout << ip2 << ": " << *ip2 << endl;

    string *sp1 = new string;
    string *sp2 = new string();
    cout << sp1 << ": " << *sp1 << endl;
    cout << sp2 << ": " << *sp2 << endl;
    return 0;
}