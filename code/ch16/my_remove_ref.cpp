#include "primer.h"
using namespace std;

template <typename T> struct my_remve_reference { typedef T type; };
template <typename T> struct my_remve_reference<T &> { typedef T type; };
template <typename T> struct my_remve_reference<T &&> { typedef T type; };

int main() {
    my_remve_reference<int &&>::type i;
    return 0;
}