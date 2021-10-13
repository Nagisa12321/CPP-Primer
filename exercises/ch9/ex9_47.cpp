#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

int main() {
    string a = "ab2c3d7R3E6";
    string numbers = "0123456789";

    auto pos = 0;
    while ((pos = a.find_first_of(numbers, pos)) != string::npos) {
        cout << "found a number " << a[pos]
             << ", index is " << pos << endl;
        ++pos;
    }

    pos = 0;
    while ((pos = a.find_first_not_of(numbers, pos)) != string::npos) {
        cout << "found a letter " << a[pos]
             << ", index is " << pos << endl;
        ++pos;
    }
    return 0;
}