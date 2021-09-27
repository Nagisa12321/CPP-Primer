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

void print_version_1_0(const int *begin, const int *end) {
    while (begin != end)
        cout << *begin++ << " ";
    cout << endl;
}

void print_version_2_0(int ia[], const size_t sz) {
    for (size_t i = 0; i < sz; i++) {
        cout << ia[i] << " ";
    }   
    cout << endl;
}


int main() {
    int i = 0, j[2] = {0, 1};
    print_version_1_0(&i, &i + 1);
    print_version_2_0(&i, 1);

    print_version_1_0(begin(j), end(j));
    print_version_2_0(j, end(j) - begin(j));
    return 0;
}