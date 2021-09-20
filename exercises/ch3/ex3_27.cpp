#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int txt_size() {
    return 10;
}

int main() {
    unsigned buf_size = 1024;

    // (a) - illeagal: should be a const expr
    // int ia[buf_size];

    // (b)
    int ib[4 * 7 - 14];

    // (c) - illeagal: should be a const expr
    // int ic[txt_size()]

    // (d) - illeagal
    // char st[11] = "fundamental";
}