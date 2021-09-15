#include <cctype>
#include <iostream>
#include <sys/types.h>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    string str = "some string";
    size_t idx = 0;
    while (idx < str.size() && str[idx] != ' ') {
        char &c = str[idx++];
        c = toupper(c);
    }

    cout << str << endl;
}