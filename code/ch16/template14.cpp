#include "primer.h"
using namespace std;

class A {
    friend bool compareA(const A &a1, const A &a2);
public:
    A(int i) : val(i) {}
private:
    int val;
};

bool compareA(const A &a1, const A &a2) {
    return a1.val < a2.val;
}

template <typename T, typename F = less<T>>
int compare(const T &t1, const T &t2, F f = F()) {
    if (f(t1, t2)) return -1;
    else if (f(t2, t1)) return 1;
    return 0;
}

int main() {

    A a0(20), a1(30);
    cout << compare<A>(a0, a1, compareA) << endl;
    return 0;
}