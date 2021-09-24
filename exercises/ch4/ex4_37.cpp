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
    int i; 
    double d;
    const string *ps;
    char *pc;
    void *pv;

    // (a)
    pv = (void *) ps;
    string *tmp = const_cast<string *>(ps); 
    pv = static_cast<void *>(tmp); 

    // (b)
    i = (int) (*pc);
    i = static_cast<int>(*pc);

    // (c)
    pv = &d;
    pv = static_cast<void *>(&d);

    // (d)
    pc = (char *) pv;
    pc = static_cast<char *>(pv);
}