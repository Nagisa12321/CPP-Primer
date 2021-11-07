#include "primer.h"
using namespace std;

class Foo1 {
public:
    Foo1() : val1(10) { cout << "Foo1 constructor!" << endl; }
protected:
    int val1;
};

class Foo2 : public Foo1 {
public: 
    Foo2() :val2(30) { cout << "Foo2 constructor!" << endl; }
private:
    int val2;
};

int main() {
    Foo2 foo;
    return 0;
}