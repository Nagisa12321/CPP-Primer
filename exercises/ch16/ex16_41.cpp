#include "primer.h"
using namespace std;

template <typename T1, typename T2> 
auto sum(const T1 &t1, const T2 &t2) -> decltype(t1 + t2) {
    return t1 + t2;
}

int main() {
    auto s = sum(0xff, 0xff);
    auto s1 = sum(0xfffffffffffffff, 20);

    cout << s << endl;
    cout << hex << INT32_MAX << endl;
    cout << hex << s1 << endl;
    return 0;
}