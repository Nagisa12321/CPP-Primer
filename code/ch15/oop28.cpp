#include "primer.h"
using namespace std;

class A {
public:
    A(int i) : pi(new int(i)) {}
    A(const A &a) : pi(new int(*a.pi)) {}
    virtual void show() { cout << "I am A" << endl; }

    A &operator=(const A &a) {
        if (&a == this) return *this;
        delete pi;
        pi = new int(*a.pi);
        return *this;
    }

    virtual ~A() { delete pi; }

private:
    int *pi;
};

class B : public A {
public:

    B(int i, int j) : A(i), pi_b(new int(j)) {}
    B(const B &b) : A(b), pi_b(new int(*b.pi_b)) {}
    virtual void show() { cout << "I am B" << endl; }

    B &operator=(const B &b) {
        if (&b == this) return *this;
        delete pi_b;
        pi_b = new int(*b.pi_b);
        return *this;
    }

    ~B() { delete pi_b; }


private:
    int *pi_b;
};

int main() {
    vector<A *> avec; 
    for (int i = 0; i < 10; ++i) {
        if (rand() % 2) avec.push_back(new A(10));
        else avec.push_back(new B(10, 20));
    }

    for (A *a : avec)
        a->show();

    for (A *a : avec)
        delete a;
    return 0;
}