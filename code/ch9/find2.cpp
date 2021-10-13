#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

int main() {
    string numbers("0123456789"), name("r2d2");
    auto pos = name.find_first_of(numbers);
    cout << pos << endl;

    string dept("03714p3");
    auto pos2 = dept.find_first_not_of(numbers);
    cout << pos2 << endl;
    return 0;
}