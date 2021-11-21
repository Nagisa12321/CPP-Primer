#ifndef TEMPLATE__H
#define TEMPLATE__H

#include <iostream>
class A {
public:
    A() { std::cout << "A()" << std::endl; }
};

template <typename T>
class template_ {
public:
    int hello(T &t1, T &t2) { return t1 - t2; }
private:
    T t;
};

void fn0();
void fn1();

#endif // TEMPLATE__H
