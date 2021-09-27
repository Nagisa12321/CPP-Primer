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

void print(const int ia[10]) {
    for (size_t i = 0; i != 10; i++) {
        cout << ia[i] << " ";
    }
    cout << endl;
}

int main() {
    int ia[10] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 10};
    int ia2[5] = {1, 2, 3, 4, 5};
    print(ia);
    print(ia2);
    return 0;
}