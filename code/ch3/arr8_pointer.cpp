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
    int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto ia2 = ia; // ia2: int *

    *ia = 42;

    for (int i = 0; i < 10; i++)
        cout << ia[i] << " ";
    cout << endl;

    decltype(ia) a;
}