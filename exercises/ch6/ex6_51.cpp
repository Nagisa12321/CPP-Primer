#include <iostream>
#include <vector>
#include <cstdio>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;
using std::begin;
using std::end;
using std::map;
void f();                      // 1
void f(int);                   // 2
void f(int, int);              // 3
void f(double, double); // 4

int main() {
    // (a) - error
    // f(2.56, 42);
    // (b) - 2
    f(42);
    // (c) - 3
    f(42, 0);
    // (d) - 4
    f(2.56, 3.14);
    return EXIT_SUCCESS;
}
void f() {
    cout << "void f();" << endl;
}
void f(int) {
    cout << "void f(int);" << endl;
}
void f(int, int) {
    cout << "void f(int, int);" << endl;
}
void f(double, double) {
    cout << "void f(double, double = 3.14);" << endl;
}
