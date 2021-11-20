#include "primer.h"
using namespace std;

template <typename T> class Foo {
    friend int main();
public: 
    static size_t count() { return ctr; }

private:    
    static size_t ctr;
};

template <typename T> size_t Foo<T>::ctr = 0;

int main() {
    Foo<int>::ctr = 123;
    Foo<string>::ctr = 456;

    Foo<int> ifoo;
    Foo<string>  sfoo;
    cout << ifoo.count() << endl;
    cout << sfoo.count() << endl;
    return 0;
}