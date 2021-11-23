#include "primer.h"
using namespace std;

template <typename T>
int compare(const T &t1, const T &t2) {
    if (t1 < t2) return -1;
    else if (t2 < t1) return 1;
    return 0;
}

void func(int (*)(const int &, const int &)) { cout << "1" << endl; }
void func(int (*)(const string &, const string &)) { cout << "2" << endl; }

int main() {
    int (*fn_pointer0)(const int &, const int &) = compare;
    func(fn_pointer0);
    return 0;
}