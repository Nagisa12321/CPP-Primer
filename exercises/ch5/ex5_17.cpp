#include <iostream>
#include <vector>
#include <cstdio>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;
using std::map;

bool prefix(vector<int> v1, vector<int> v2) {
    for (size_t i = 0; i < v1.size() && i < v2.size(); ++i)
        if (!(v1[i] == v2[i]))
            return false;
    return true;
}

int main() {
    vector<int> vec1 = {0, 1, 1, 2};
    vector<int> vec2 = {0, 1, 1, 2, 3, 5, 8};

    cout << prefix(vec1, vec2) << endl;
}