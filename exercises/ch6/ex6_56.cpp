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

int func(int, int);

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int multi(int a, int b) {
    return a * b;
}

int dev(int a, int b) {
    return a / b;
}

int main() {
    vector<int (*)(int, int)> vec;
    vec.push_back(add);
    vec.push_back(sub);
    vec.push_back(multi);
    vec.push_back(dev);

    int a = 20, b = 30;
    for (auto fn : vec) 
        cout << fn(a, b) << endl;

    return EXIT_SUCCESS;
}