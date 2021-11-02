#include "../primer.h"
#include "my_unique_ptr.h"
using namespace std;

my_unique_ptr get_ptr() {
    my_unique_ptr ptr(new int(1024));
    return ptr;
}

int main() {
    cout << "test1: " << endl;
    my_unique_ptr p = get_ptr();
    cout << "*p: " << *p << endl;

    cout << "test2: " << endl;
    my_unique_ptr p1(new int(42));
    int *ptr = p1.release();
    delete ptr;

    cout << "test3: " << endl;
    my_unique_ptr p2(new int(42));
    p2.reset(new int(1024));
    cout << "p2: " << *p2 << endl;

    return 0;
}