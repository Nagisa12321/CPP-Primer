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

int &get(int *array, int index) {
    return array[index];
}

int main() {
    int ia[10];

    for (int i = 0; i != 10; ++i) {
        get(ia, i) = i;
    }

    for (int i = 0; i < 10; ++i)
        cout << ia[i] << " ";
    cout << endl;
    return EXIT_SUCCESS;
}