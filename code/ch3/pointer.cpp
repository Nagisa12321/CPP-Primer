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
    int last = *(ia + 4);

    cout << last << endl;
}