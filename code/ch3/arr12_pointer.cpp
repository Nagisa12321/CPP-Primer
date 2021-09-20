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
    constexpr size_t sz = 5;
    int arr[sz] = {1, 2, 3, 4, 5};
    int *ip = arr;
    int *ip2 = ip + 4;

    cout << *ip << endl;
    cout << *ip2 << endl;

    int *p = arr + sz;
    int *p2 = arr + 10;
    cout << p << endl;
    cout << p2 << endl;

    auto len = end(arr) - begin(arr); // long
}