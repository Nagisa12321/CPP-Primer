#include "primer.h"
using namespace std;

class debug_delete {
public:
    debug_delete(ostream &s = cerr) : os(s) { }
    template <typename T> void operator()(T *p) {
        os << "deleting unique_ptr" << endl;
        delete p;
    }
private:
    ostream &os;
};

class A {
public:
    A() { cout << "A()" << endl; }
    ~A() { cout << "~A()" << endl; }
};

int main() {
    // debug_delete dd(cout);
    // int *pi = new int(1024);
    // A *pa = new A();
    // dd(pi);
    // dd(pa);
    function<void(A *a)> fn = [](A *a) {
        cout << "will delete A" << endl;
        delete a;
    };
    // Deleter must be FunctionObject or lvalue reference 
    // to a FunctionObject or lvalue reference to function, 
    // callable with an argument of type unique_ptr<T, Deleter>::pointer
    unique_ptr<A, decltype(fn)> ap(new A(), fn);

    return 0;
}