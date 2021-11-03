#include "primer.h"
using namespace std;

class abs_int {
public:
    int operator()(int val) { return abs(val); }
};

int main() {
    abs_int _abs;
    int a = _abs(-42);
    cout << a << endl;
}