#include "primer.h"
using namespace std;

template <typename T> void f3(T &&val) {
    T test = val;
    ++test;
    if (test == val) {
        cout << "T is a reference!" << endl; 
    } else {
        cout << "T is a value!" << endl;
    }
}

int main() {
    int i = 42;
    const int ci = 1024;
    f3(i);
    // f3(ci);
    f3(42);

    return 0;
}