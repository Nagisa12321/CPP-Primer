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

    for (int(&r)[col] : ia) {
        for (int c : r)
            cout << c << " ";
        cout << endl;
    }

    int *p = (int *)ia;
    cout << p[10] << endl;
}