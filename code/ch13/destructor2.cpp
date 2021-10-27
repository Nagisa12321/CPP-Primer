#include "primer.h"
using namespace std;

class Foo {
public:
    Foo() { cout << "Foo constructor. " << endl; p = new int(42); }
    ~Foo() { cout << "Foo destructor. " << endl; delete p; }

private:
    int *p;
};

int main() {
    {
        Foo *foo = new Foo;
        delete foo;
    }
    cout << "----" << endl;
    {
        shared_ptr<Foo> pf = make_shared<Foo>();
    }
    cout << "----" << endl;
    {
        Foo *foo = new Foo;
        Foo foo2(*foo);
    }
    cout << "----" << endl;
    {
        Foo *foo = new Foo;
        vector<Foo> vec;
        vec.push_back(*foo);
    }
    cout << "----" << endl;
    return 0;
}