#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int get_size() {
    return 10;
}

int main() {
    unsigned int cnt = 42;
    constexpr unsigned sz = 42;

    int arr[10];
    int *parr[sz];

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    // string bad[cnt];
    // string strs[get_size()];
}