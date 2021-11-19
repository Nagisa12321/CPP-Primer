#include "primer.h"
using namespace std;

template <typename T>
int compare(const T &t1, const T &t2) {
    if (t1 < t2) return -1;
    else if (t2 < t1) return 1;
    else return 0;
}

int main() {
    cout << compare(1, 2) << endl;
    return 0;
}