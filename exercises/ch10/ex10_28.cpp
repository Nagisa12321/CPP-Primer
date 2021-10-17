// io
#include <iostream>
#include <cstdlib>
#include <cstdio>

// containers
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <vector>
#include <deque>
#include <forward_list>

// algorithm
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    deque<int> ivec;
    for (int i = 1; i <= 9; ++i)
        ivec.push_back(i);

    deque<int> v1;
    deque<int> v2;
    deque<int> v3;
    copy(ivec.begin(), ivec.end(), inserter(v1, v1.begin()));
    copy(ivec.begin(), ivec.end(), back_inserter(v2));
    copy(ivec.begin(), ivec.end(), front_inserter(v3));

    cout << "v1: ";
    for (int i : v1) cout << i << " ";
    cout << endl;

    cout << "v2: ";
    for (int i : v2) cout << i << " ";
    cout << endl;

    cout << "v3: ";
    for (int i : v3) cout << i << " ";
    cout << endl;


    return 0;
}