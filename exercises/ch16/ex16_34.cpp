#include "primer.h"
using namespace std;

template <typename T>
int compare(const T &t1, const T &t2) {
    if (t1 < t2) return -1;
    else if (t2 < t1) return 1;
    return 0;
}


int main() {
    // compare("hi", "world");
    compare("bye", "dad");
    return 0;
}