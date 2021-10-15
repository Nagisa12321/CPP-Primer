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
    vector<int> vec;

    for (int i = 1; i <= 100; ++i)
        vec.push_back(i);

    auto sum = accumulate(vec.begin(), vec.end(), 0);

    cout << sum << endl;

    vector<string> svec{"hello ", "world ", "my ", "name ", "is ", " ..."};
    auto sum1 = accumulate(svec.begin(), svec.end(), string(""));
    cout << sum1 << endl;
    return 0;
}