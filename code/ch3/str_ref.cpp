#include <cctype>
#include <iostream>
#include <sys/types.h>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    string str = "Hello, World!";
    cout << str << endl;

    for (char &c : str)
        if (islower(c))
            c = toupper(c);

    cout << str << endl;
}