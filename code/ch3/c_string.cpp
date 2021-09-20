#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::begin;
using std::end;

int main() {
    char ca[] = {'C', '+', '+'};
    char ca1[] = {'C', '+', '+'};

    // strlen works
    // stop by finding the '\0'
    size_t len = strlen(ca);

    cout << len << endl;
}