#include "primer.h"
using namespace std;

class A {};
class B : public A {};
class C : public B {
public:
    C() : B() {}
};
 
int main() {
    
    return 0;
}