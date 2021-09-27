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

void print(int (&arr)[10]) {
    for (auto elem : arr) 
        cout << elem << " ";
    cout << endl;
}

int main() {
    int ia[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int j[2] = {1, 2};
    print(ia);
    // print(j);
    return 0;
}