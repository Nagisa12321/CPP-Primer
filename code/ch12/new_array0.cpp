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
    int arr_size = 10;
    int *pia = new int[10]{ 1 };

    int ia[] = {1, 2, 3};
    int *pia1 = ia;
    cout << typeid(ia).name() << endl;
    cout << typeid(pia1).name() << endl;

    ostream_iterator<int> oss(cout, " ");
    copy(begin(ia), end(ia), oss);
    cout << endl;

    copy(pia, pia + arr_size, oss);
    cout << endl;
    return 0;
}