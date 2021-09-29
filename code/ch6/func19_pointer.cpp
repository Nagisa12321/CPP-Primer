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
using std::begin;
using std::end;
using std::map;

void exec(void (*fn)()) {
    cout << "will exec the func()" << endl;
    fn();
    cout << "ok." << endl;
}

void func() {
    cout << "hello world!" << endl;
}

int main() {
    exec(func);
    return EXIT_SUCCESS;
}