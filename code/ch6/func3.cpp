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

size_t count_call() {
    static size_t ctr;
    return ++ctr;
}

int main() {
    for (size_t i = 0; i != 10; ++i)
        cout << count_call() << endl;
    return 0;
}