#include "primer.h"
using namespace std;

unique_ptr<int> make_unique_ptr() {
    unique_ptr<int> p(new int(1024));
    return p;
}

int main() {
    unique_ptr<int> p = make_unique_ptr(); /* it is a 'unique_ptr<int> &&' */
    cout << "*p: " << *p << endl;
    return 0;
}