#include "primer.h"
using namespace std;

struct no_copy {
    no_copy(int val) :
        val(val) {
    }
    no_copy(const no_copy &) = delete;
    no_copy &operator=(const no_copy &) = delete;
    ~no_copy() = delete;

    int val;
};

int main() {
    no_copy *ncpy = new no_copy(40);
    // can not delete the `ncpy`!!
    return 0;
}