#include <iostream>
#include <vector>
#include <cstdio>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;
using std::map;

int no_name(int) {
    return -1;
}

void func() {
    cout << "hello world" << endl;
}

void return_void() {
    return func();
}

int fact(int val) {
    int ret = 1;
    while (val > 1)
        ret *= val--;
    return ret;
}

int main() {
    int j = fact(5);
    cout << "5! is " << j << endl;
    cout << "no_name(int) is " << no_name(100) << endl;
    return_void();
    return 0;
}