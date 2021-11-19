#include "primer.h"
using namespace std;

template <typename T>
void show(T t) {
    cout << t << endl;
}

class A {
    friend ostream &operator<<(ostream &out, const A &a);
public:
    virtual void print(ostream &out) const { out << "I am A"; }
};

class B : public A {
public:
    virtual void print(ostream &out) const { out << "I am B"; }
};

ostream &operator<<(ostream &out, const A &a) {
    a.print(out);
    return out;
}

int main() {
    A a;
    B b;

    show(1);
    show("hello");
    show(a);
    show(b);
    return 0;
}