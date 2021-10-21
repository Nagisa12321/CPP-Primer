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

void make_p() {
    int *ip = new int(1024);
    cout << ip << endl;
}

int main() {
    make_p();
    string s;
    getline(cin, s);
    long long addr = stoll(s, 0, 16);
    int *p = (int *)addr;
    cout << *p << endl;

    delete p;
    return 0;
}