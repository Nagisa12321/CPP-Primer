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
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    // const char ca2[] = {'h', 'e', 'l', 'l', 'o'};
    const char *cp = ca;

    while (*cp) {
        cout << *cp << endl;
        cp++;
    }
}