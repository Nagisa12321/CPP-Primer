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

// typedef int arrT[10];
using arrT = int[10];

int ia[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int *pia[10] = {0};

arrT *ret_arr_pointer() {
    return &ia;
}

int *(*ret_arr_of_pointer())[10] {
    return &pia;
}

int main() {
    int(*ia)[10] = ret_arr_pointer();
    for (int i = 0; i < 10; i++)
        cout << *ia[i] << " ";
    cout << endl;
    return EXIT_SUCCESS;
}