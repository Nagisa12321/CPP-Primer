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
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = arr;

    cout << (void *)p << endl;
    ++p;
    cout << (void *)p << endl;
    cout << *p << endl; // 1

    char chs[] = {'C', '+', '+'};
    char *cp = chs;
    cout << (void *)cp << endl;
    ++cp;
    cout << (void *)cp << endl;
    cout << *cp << endl; // '+'
}