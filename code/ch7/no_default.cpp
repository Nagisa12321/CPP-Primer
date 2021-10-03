#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

class no_default {
public: 
    no_default(const string &);
};

struct A {
    A() = default;
    no_default no_d;
};

// A a;
 
struct B {
    // B() {}
    B() : no_d("hi") {}
    no_default no_d;
};

struct C {
public: 
    // C() = default;
    // C(int val) : val(val) {} 

    void show() { printf("%d\n", val); }
private:
    int val;
};


int main() {
    C c;
    c.show();
    return EXIT_SUCCESS;
}