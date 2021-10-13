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

    cout << (string::npos == numbers.find(name)) << endl;
    return 0;
}