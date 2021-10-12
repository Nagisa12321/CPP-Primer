#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    vector<int> empty_vec{10};

    int at_first = empty_vec.at(0);
    cout << at_first << endl;

    int idx_first = empty_vec[0];
    cout << idx_first << endl;

    int front_first = empty_vec.front();
    cout << front_first << endl;

    int it_first = *empty_vec.begin();
    cout << it_first << endl;
    return 0;
}