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

int ia[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int *p[10] = {0};

auto func(int i) -> int (*)[10] {
    return &ia;
}

auto func_p(int i) -> int *(*)[10] {
    return &p;
}

// int (*func(int i))[10] {
//     return &ia;
// }

int main() {
    int(*p)[10] = func(10);
    for (int i = 0; i < 10; i++) {
        cout << (*p)[i] << " ";
    }
    cout << endl;
    return EXIT_SUCCESS;
}
