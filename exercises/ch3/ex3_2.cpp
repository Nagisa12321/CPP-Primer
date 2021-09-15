#include <iostream>
#include <sys/types.h>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    cout << "read a line" << endl;
    string line;
    getline(cin, line);
    cout << line << endl;

    cout << "read a word" << endl;
    string word;
    cin >> word;
    cout << word << endl;
}