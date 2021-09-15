#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    string s1 = "hello";
    string s2 = s1;
    vector<int> a;
    a.data();
    cout << (s1 == s2) << endl;
    cout << "s1's addr: " << (void *)s1.data() << endl;
    cout << "s1's addr: " << (void *)&s1[0] << endl;
    cout << "s1's addr: " << (void *)s1.c_str() << endl;
    cout << "s2's addr: " << (void *)s2.data() << endl;
    cout << "s2's addr: " << (void *)s2.c_str() << endl;
}