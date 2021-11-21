#include "primer.h"
using namespace std;

template <typename T = int>
class number {
public:
    number(T t = 0) : val(t) {}
private:
    T val;
};

class A {};

int main() {
    number<> n0;
    // number<A> n1;
    return 0;
}