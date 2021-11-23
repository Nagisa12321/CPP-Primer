#include "primer.h"
using namespace std;

template <typename T> void f0(T &p) {} 
template <typename T> void f1(const T &p) {}
template <typename T> void f2(T &&p) {}

void f3(int &&i) {}

int main() {
    int i;
    const int ci = 1024;
    /* test 1 */
    f0(i);
    f0(ci);
    // f0(42);

    /* test 2 */
    f1(i);
    f1(ci);
    f1(42);

    /* test 3 */
    f2(i);
    f2(ci);
    f2(42);

    /* test 4 */
    // f3(i);
    // f3(ci);
    f3(42);

    return 0;
}