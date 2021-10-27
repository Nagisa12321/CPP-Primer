#include "primer.h"
using namespace std;

struct no_copy {
    no_copy(int val) :
        val(val) {
    }
    no_copy(const no_copy &) = delete;
    no_copy &operator=(const no_copy &) = delete;
    ~no_copy() = default;

    int val;
};

int main() {
    no_copy nc1(42);
    no_copy nc2(100);

    cout << nc1.val << endl;
    return 0;
}