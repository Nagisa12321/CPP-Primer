#include "primer.h"
using namespace std;

template <typename T>
int compare(const T &t1, const T &t2) {
    if (t1 < t2) return -1;
    else if (t2 < t1) return 1;
    return 0;
}

template <typename T1, typename T2>
int fix_compare(const T1 &t1, const T2 &t2) {
    if (t1 < t2) return -1;
    else if (t2 < t1) return 1;
    return 0;
}

int main() {
    int i = 10;
    double j = 20.0;
    // cout << compare(i, j) << endl;
    cout << fix_compare(i, j) << endl;
    return 0;
}