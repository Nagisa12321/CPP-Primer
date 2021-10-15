// io
#include <iostream>
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
#ifdef _A_
    vector<int> vec;
    list<int> lst;
    int i;
    while (cin >> i)
        lst.push_back(i);
    copy(lst.cbegin(), lst.cend(), back_inserter(vec));

    for (int i : vec)
        cout << i << " ";
    cout << endl;

    for (int i : lst)
        cout << i << " ";
    cout << endl;
#endif

#ifdef _B_
    vector<int> vec;
    vec.resize(10);
    fill_n(vec.begin(), 10, 0);

    for (int i : vec)
        cout << i << " ";
    cout << endl;
#endif

    return 0;
}