#include <iostream>
int ret_fun(int i, int j) {
    return i + j;
}

void func(int i, int j) {
    std::cout << i << " + " << j << " = " << i + j << std::endl;
}

void hello() {
    std::cout << "hello, world!" << std::endl;
}

int main() {
    void (*fun1)(int, int) = func;
    void (*fun2)() = hello;
    int (*fun3)(int, int) = ret_fun;

    fun1(1, 2);
    fun2();
    int ret = fun3(10, 20);
    std::cout << ret << std::endl;
}