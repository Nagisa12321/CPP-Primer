#include "primer.h"
using namespace std;

class A {
public:
    virtual void show() { cout << "I am A" << endl; }
};

class B : public A {
public:
    virtual void show() { cout << "I am B" << endl; }
};

int main() {
    vector<shared_ptr<A>> avec; 
    for (int i = 0; i < 10; ++i) {
        if (rand() % 2) avec.push_back(make_shared<A>());
        else avec.push_back(make_shared<B>());
    }

    for (shared_ptr<A> p : avec)
        p->show();
    return 0;
}