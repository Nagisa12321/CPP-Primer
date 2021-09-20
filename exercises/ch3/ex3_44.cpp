#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::begin;
using std::end;

int main() {
    constexpr size_t row = 3, col = 4;
    int ia[row][col];

    int cnt = 0;
    for (int(&r)[col] : ia) {
        for (int &c : r) {
            c = cnt++;
        }
    }

    ////////////////////////////////

    using int_array = int[4];
    for (int_array *p = ia; p != ia + row; ++p) {
        for (int *q = *p; q != *p + col; ++q) {
            cout << *q << " ";
        }
        cout << endl;
    }
}