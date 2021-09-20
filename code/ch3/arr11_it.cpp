#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::begin;
using std::end;

int main() {
    constexpr size_t arr_len = 10;
    int arr[arr_len] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int *p = begin(arr); p != end(arr); p++)
        cout << *p << " ";
    cout << endl;
}