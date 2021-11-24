#include "primer.h"
using namespace std;

class A {
public:
    A() { cout << "A()" << endl; }
    A(const A &) { cout << "A(const A &)" << endl; }
    A(A &&) { cout << "A(A &&)" << endl; }
    ~A() { cout << "~A()" << endl; }
    A &operator=(const A &) { cout << "A &operator=(const A &)" << endl; return *this; }
    A &operator=(A &&) { cout << "A &operator=(A &&)" << endl; return *this; }

};


template <typename T>
typename remove_reference<T>::type && my_move(T &&t) {
    return static_cast<typename remove_reference<T>::type &&>(t);
}       

int main() {
    {
        cout << "test1: " << endl;
        A a;
        A b(my_move(a));
        a = A();
    }

    {
        cout << "\ntest2: " << endl;
        string s1("hi"), s2;
        /* string &&std::move(string &&) */
        s2 = std::move(string("bye!"));
        /* string &&std::move(string& &&) */
        s2 = std::move(s1);
        cout << "s1: " << s1 << endl;
        cout << "s2: " << s2 << endl;
    }

    {
        /* use std::move instead of static cast. */
        cout << "\ntest3" << endl;
        A a;
        A b(static_cast<A &&>(a));
        A c((A &&) a);
    }
    return 0;
}