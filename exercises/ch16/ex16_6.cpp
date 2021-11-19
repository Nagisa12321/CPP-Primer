#include "primer.h"
using namespace std;

template <typename T, unsigned size>
const T *my_begin(const T (&ta)[size]) {
    return ta;
}

template <typename T, unsigned size>
const T *my_end(const T (&ta)[size]) {
    return ta + size;
}

int main() {
    int ia[4] = {0, 1, 2, 3};
    const int *cur = my_begin(ia);
    while (cur != my_end(ia)) {
        cout << *cur++ << endl;
    }
    return 0;
}