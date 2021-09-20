#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    int arr[10] = {0};

    for (int i = 0; i < 10; i++)
        arr[i] = i;

    for (auto i : arr)
        cout << i << " ";
    cout << endl;
}