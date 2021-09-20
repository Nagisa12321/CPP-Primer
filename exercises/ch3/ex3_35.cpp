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
    int arr[] = {1, 2, 3, 4, 5, 6};

    for (int *p = begin(arr); p != end(arr); p++)
        *p = 0;

    for (int i : arr)
        cout << i << " ";
    cout << endl;
}