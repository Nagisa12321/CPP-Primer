#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

struct X {
    X(int i, int j) : base(i), rem(base % j) {}
    int base, rem;

    void show() {
        cout << "rem=" << rem << endl;
        cout << "base=" << base << endl;
    }
};

int main() {
    X x(1131230000, 1231);
    x.show();
    return EXIT_SUCCESS;
}