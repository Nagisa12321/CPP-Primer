#include "primer.h"
using namespace std;

int ia[10];

auto func0() -> int (*)[10] {
    return &ia;
}

int (*func1())[10] {
    return &ia;
}

template <typename _Iterator>
auto func3(_Iterator begin) -> decltype(*begin) {
    return *begin;
}

template <typename _Iterator>
auto func4(_Iterator begin) -> typename remove_reference<decltype(*begin)>::type {
    return *begin;
}

int main() {
    remove_reference<int &>::type i;
    vector<string> svec{"hello"};
    vector<int> ivec{1, 2, 3};

    func3(svec.begin())[0] = '%';
    func3(ivec.begin()) = 1024;
    primer_show(svec);
    primer_show(ivec);
    cout << func4(ivec.begin() + 1) << endl;
    return 0;
}