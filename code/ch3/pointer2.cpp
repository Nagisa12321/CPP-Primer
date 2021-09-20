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
    int ia[] = {0, 2, 4, 6, 8};

    int i = ia[0];
    cout << i << endl;

    int *p = ia;
    i = *(p + 2);
    cout << i << endl;
}