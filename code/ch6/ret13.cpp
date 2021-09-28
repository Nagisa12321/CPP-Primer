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

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};

decltype(&odd) arrPtr(int i) {
    return i % 2 ? &odd : &even;
}

int main() {
    decltype(&odd) p = arrPtr(10);
    for (int *i = begin(*p); i != end(*p); ++i)
        cout << (*i) << " ";
    cout << endl;
    return EXIT_SUCCESS;
}