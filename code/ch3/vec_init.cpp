#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> v1;
    vector<int> v2 = v1;
    vector<int> v3 = v1;
    vector<int> v4(10, 1);
    vector<int> v5(10);
    vector<int> v6{1, 4, 2, 8, 5, 7};
    vector<int> v7 = {1, 4, 2, 8, 5, 7};
}