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
using std::begin;
using std::end;
using std::map;

void swap(int &v1, int &v2) {
    if (v1 == v2)
        return;

    v1 ^= v2;
    v2 ^= v1;
    v1 ^= v2;
}

int main() {
    int a = 20;
    int b = 30;
    swap(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}