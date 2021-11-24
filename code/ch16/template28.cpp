#include "primer.h"
using namespace std;

template <typename T>
void foo(T) { cout << "foo(T)" << endl; }

void foo(int) { cout << "foo(int)" << endl; }

template <typename T>
void foo1(T, int) { cout << "foo1(T, int)" << endl; }

template <typename T>
void foo1(int, T) { cout << "foo1(int, T)" << endl; }

template <typename T, typename T2>
void foo1(T, T2) { cout << "foo1(T, T2)" << endl; }

int main() {
    foo(30);
    foo(30.0);
    // foo1(10, 10);
    foo1(10.0, 10);
    foo1(10, 10.0);
    return 0;
}