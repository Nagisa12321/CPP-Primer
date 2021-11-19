#include "primer.h"
using namespace std;

template <typename T>
T foo(T *p) {
    T tmp = *p;
    return tmp;
}

template <typename T, class U>
T calc(const T &, const U &);

int main() {
    
    return 0;
}