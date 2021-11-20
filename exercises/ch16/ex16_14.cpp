#include "primer.h"
using namespace std;

template <unsigned H, unsigned W>
class screen {
};

template <unsigned H, unsigned W>
ostream &operator<<(ostream &out, const screen<H, W> &) {
    out << "[" << H << ", " << W << "]";
    return out;
}

int main() {
    screen<10, 20> sc;
    cout << sc << endl;
    return 0;
}
