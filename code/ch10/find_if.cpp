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

std::vector<int>::iterator my_find_if(std::vector<int>::iterator begin, 
                                      std::vector<int>::iterator end, 
                                      bool (*fn)(int)) {
    while (begin != end) {
        if (fn(*begin))
            return begin;
        ++begin;
    } 
    return end;
}

int main() {
    vector<int> vec{1, 4, 2, 8, 5, 7};

    auto it0 = find_if(vec.begin(), vec.end(), [](int i) { return i > 5; });
    cout << *it0 << endl;
    auto it1 = my_find_if(vec.begin(), vec.end(), [](int i) { return i > 5; });
    cout << *it1 << endl;
    return 0;
}