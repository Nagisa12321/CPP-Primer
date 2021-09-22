#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    string s1 = "a string", *p = &s1;

    int n1 = s1.size();
    int n2 = p->size();
    int n3 = (*p).size();

    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3 << endl;
}