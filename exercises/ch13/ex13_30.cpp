#include "primer.h"
using namespace std;

class HasPtr {
    friend int main();
    friend void swap(HasPtr &, HasPtr &);

public:
    HasPtr(int val = 0, string *sp = new string()) :
        val(val), sp(sp) {
    }

    HasPtr(const HasPtr &hp) :
        val(hp.val), sp(new string(*hp.sp)) {
    }

    HasPtr &operator=(const HasPtr &hp) {
        string *tmpsp = new string(*hp.sp);
        delete sp;
        sp = tmpsp;
        val = hp.val;
        return *this;
    }

    // HasPtr &operator=(HasPtr hp) {
    //     swap(*this, hp);
    //     return *this;
    // }

    ~HasPtr() {
        delete sp;
    }

private:
    int val;
    string *sp;
};

inline void swap(HasPtr &h1, HasPtr &h2) {
    cout << "HasPtr, swap()" << endl;
    swap(h1.sp, h2.sp);
    swap(h1.val, h2.val);
}

class Foo {
    friend void swap(Foo &, Foo &);

public:
    HasPtr h;
};

inline void swap(Foo &foo1, Foo &foo2) {
    cout << "Foo, swap()" << endl;
    swap(foo1.h, foo2.h);
}

int main() {
    HasPtr h1(1, new string("hello"));
    HasPtr h2(2, new string("world"));

    cout << "h1: " << h1.val << ", " << *h1.sp << endl;
    cout << "h2: " << h2.val << ", " << *h2.sp << endl;
    
    swap(h1, h2);

    cout << "h1: " << h1.val << ", " << *h1.sp << endl;
    cout << "h2: " << h2.val << ", " << *h2.sp << endl;
    return 0;
}