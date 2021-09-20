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
    int ia[3][4] = {{0}, {4}, {8}};
    int arr[10][20][30] = {0};

    ia[2][3] = arr[0][0][0];

    int(&row)[4] = ia[1];
}