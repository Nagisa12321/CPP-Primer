#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    string s1 = "hello, world!";
    cout << s1 << endl;

    cout << "input s2: ";
    string s2;
    getline(cin, s2);
    cout << s2 << endl;

    cout << "input s3: ";
    string s3;
    getline(cin, s3);
    cout << s3 << endl;

    string s4;
    cout << "s3.empty(): " << s3.empty() << endl;
    cout << "s4.empty(): " << s4.empty() << endl;

    string s5 = "hello";
    cout << "s5: " << s5 << ", s5.size(): " << s5.size() << endl;

    for (int i = 0; i < s5.size(); i++) {
        cout << "s5[" << i << "]: " << s5[i] << endl;
    }

    string s6 = "hello";
    string s7 = ", world!";
    cout << "s6: " << s6 << ", s7: " << s7
         << ", s6 + s7: " << s6 + s7 << endl;
}