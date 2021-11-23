#include "primer.h"
using namespace std;


template <typename _Iterator>
auto func3(_Iterator begin) -> decltype(*begin + 0) {
    
    return *begin;
}

// template <typename _Iterator>
// auto func4(_Iterator begin) -> typename remove_reference<decltype(*begin)>::type {
//     return *begin;
// }

int main() {
    vector<string> svec{"hello"};
    vector<int> ivec{1, 2, 3};

    // return the value but not reference
    // only can pass the Iterator that
    // pointer to a addable type
    auto res = func3(ivec.begin());

    int i = 0, *pi = &i;
    decltype(*pi) ri = i;
    decltype(*pi + 0) i1 = i;

    return 0;
}