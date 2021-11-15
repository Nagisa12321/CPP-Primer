#include "primer.h"
using namespace std;

class B {};
class D : public B {
public:
    D(const D &d) : B(d) {}
    D(const D &&d) : B(std::move(d)) {}
};

int main() {
    
    return 0;
}