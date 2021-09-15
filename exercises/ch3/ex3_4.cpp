#include <iostream>
#include <sys/types.h>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    cout << "Please input 2 strings..." << endl;
    string s1, s2;
    cin >> s1 >> s2;

    if (s1 == s2)
        cout << "equal" << endl;
    else if (s1 > s2)
        cout << s1 << endl;
    else
        cout << s2 << endl;
}