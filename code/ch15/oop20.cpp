#include "primer.h"
using namespace std;

class B {
public:
    B();
    B(const B &) = delete;
};

class D : public B {

};

int main() {
    D d;
    // D d2(d);
    // D d3(std::move(d));
    return 0;
}