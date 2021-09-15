#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

int main() {
    string s1 = "hello";
    string s2 = s1;

    s2.append(", hi");

    cout << s1 << endl;
    cout << s2 << endl;
}