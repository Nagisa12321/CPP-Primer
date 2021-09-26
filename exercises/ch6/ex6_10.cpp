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

void swap(int *i, int *j) {
    int tmp = *i;
    *i = *j;
    *j = tmp;
}

int main() {
    int a = 10;
    int b = 20;

    swap(&a, &b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    return 0;
}