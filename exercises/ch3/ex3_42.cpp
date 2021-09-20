#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::begin;
using std::end;

int main() {
    /**
     * link 
     * https://www.geeksforgeeks.org/variable-length-arrays-in-c-and-c/
     */
    int sz = 6;
    vector<int> v0(sz, 1024);
    int arr[sz];
    vector<int> v = {1, 2, 3, 4, 5, 6};
    sz = 1024;

    for (int i = 0; i < v.size(); i++) {
        arr[i] = v[i];
    }

    for (int i : arr)
        cout << i << " ";
    cout << endl;
}