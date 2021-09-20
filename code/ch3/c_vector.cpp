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
    int arr[] = {1, 2, 3, 4, 5, 6};
    vector<int> v(begin(arr), end(arr));

    for (int i : v)
        cout << i << " ";
    cout << endl;
}