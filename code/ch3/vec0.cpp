#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string *str = new string("hello world");
    vector<string *> v1;

    v1.push_back(str);
    (*str)[0] = 'X';
    cout << *str << endl;
    cout << *v1[0] << endl;
    delete (str);
}