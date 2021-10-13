#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

int main() {
    string numbers("0123456789"), name("r2d2dqwd21dsad123");

    string::size_type pos = 0;  
    while ((pos = name.find_first_of(numbers, pos)) != string::npos) {
        cout << "found number at index: " << pos  
             << ", element is " << name[pos] << endl;
        ++pos;
    }

    return 0;
}