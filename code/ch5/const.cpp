#include <iostream>
#include <vector>
#include <cstdio>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;

int main() {
    const int sz = 1024;

    const int *cp = &sz;
    int *p = const_cast<int *>(cp);
    *p = 4096;

    
    int test = sz + *cp;
    // cout << "sz =\t" << sz << endl;
    // cout << "*p =\t" << *p << endl;

    // cout << "&sz =\t" << (void *)(&sz) << endl;
    // cout << "p =\t" << (void *)p << endl;
}