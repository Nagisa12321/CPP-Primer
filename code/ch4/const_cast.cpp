#include <iostream>
#include <vector>
#include <cstdio>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;

int main() {
    char ch = '%';
    const char *p = &ch;

    char *cast_p = const_cast<char *>(p);
    *cast_p = '&';

    cout << ch << endl;
}