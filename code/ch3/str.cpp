#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

int main() {
    string s1;
    string s2 = s1;
    string s3 = "hiya";
    string s4(10, 'c');

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
}