#include <iostream>
#include <vector>   

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;

int main() {
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "short: " << sizeof(short) << " bytes" << endl;
    cout << "char: " << sizeof(char) << " bytes" << endl;
    cout << "wchar_t: " << sizeof(wchar_t) << " bytes" << endl;
    cout << "char16_t: " << sizeof(char16_t) << " bytes" << endl;
    cout << "char32_t: " << sizeof(char32_t) << " bytes" << endl;
    cout << "long: " << sizeof(long) << " bytes" << endl;
    cout << "long long: " << sizeof(long long) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;
    cout << "float: " << sizeof(float) << " bytes" << endl;
    cout << "long double: " << sizeof(long double) << " bytes" << endl;
    cout << "bool: " << sizeof(bool) << " bytes" << endl;
}