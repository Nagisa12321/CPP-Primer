#include "primer.h"
using namespace std;

class A {
public:
    A(int = 10, int = 20, int = 30, int = 40);
};

class B : public A {
public:
    using A::A;
};

int main() {
    return 0;
}