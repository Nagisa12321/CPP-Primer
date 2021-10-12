#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

bool equals(vector<int> vec1, vector<int> vec2) {
    return vec1 == vec2;
}

int main() {
    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2 = {1, 2, 3};
    vector<int> vec3 = {1, 2, 3, 4};

    cout << equals(vec1, vec2) << endl;
    cout << equals(vec2, vec3) << endl;

    return 0;
}