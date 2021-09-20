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
    int ia1[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}};

    int ia2[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    int ia3[3][4] = {{0}, {1}, {4}};

    int ia4[4] = {3};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << ia3[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 4; i++)
        cout << ia4[i] << " ";
    cout << endl;
}