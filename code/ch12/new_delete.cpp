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
    int *pi = new int;
    cout << pi << ": " << *pi << endl;

    string *ps = new string;
    cout << ps << ": " << *ps << endl;

    int *pi1 = new int(42);
    cout << pi1 << ": " << *pi1 << endl;

    string *ps1 = new string(10, '9');
    cout << ps1 << ": " << *ps1 << endl;

    vector<int> *pv = new vector<int>{1, 2, 3, 4, 5};
    for (int i : *pv)
        cout << i << " ";
    cout << endl;
    return 0;
}