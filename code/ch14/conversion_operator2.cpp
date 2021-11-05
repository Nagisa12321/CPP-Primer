#include "primer.h"
using namespace std;

struct B;
struct A {
    A() = default;
    A(const B &) {}
};

struct B {
    explicit operator A() const { return A(); };
};

A f(const A &) { return A(); }

int main() {
    B b;
    f(b);
    A a1 = f(b.operator A());
    A a2 = f(A(b));
    return 0;
}