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
    int i, *pi1 = &i, *pi2 = nullptr;
    double *pd = new double(33), *pd2 = pd;
    // delete i;
    // delete pi1;
    delete pd;
    // delete pd2;     
    delete pi2;

    const int *pic = new const int(1024);
    cout << pic << ": " << *pic << endl;
    delete pic;
    cout << pic << ": " << *pic << endl;
    int *pi0 = new int(990);
    cout << pi0 << endl;
    cout << pic << ": " << *pic << endl;
    delete pic;
    return 0;
}