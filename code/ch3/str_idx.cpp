#include <cctype>
#include <iostream>
#include <sys/types.h>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    string str = "hello world!!!";
    decltype(str.size()) pucnt = 0;
    for (char c : str) {
        if (ispunct(c))
            pucnt++;
    }
    cout << str << endl;
}