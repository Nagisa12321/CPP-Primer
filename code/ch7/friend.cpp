#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

struct X {
    friend void f() { /* */ }
    // X() { f(); } 
    void g();
    void h();
};

// void X::g() { f(); }
void f();
void X::h() { f(); }

int main() {
    
    return EXIT_SUCCESS;
}