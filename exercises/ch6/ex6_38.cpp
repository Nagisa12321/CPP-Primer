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

int (&arrRef(int (&arr)[5]))[5] {
    return arr;
}

int main() {
    int ia[5] = {1, 2, 3, 4, 5};
    arrRef(ia)[2] = 1024;

    for (int i = 0; i < 5; i++)
        cout << ia[i] << " ";
    cout << endl;
    return EXIT_SUCCESS;
}