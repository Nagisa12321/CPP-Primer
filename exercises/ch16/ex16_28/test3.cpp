#include "../primer.h"
#include "my_unique_ptr.h"
class A {};
class B {};

int main() {
    // my_unique_ptr<A> mua = my_unique_ptr<B>();
    std::unique_ptr<A> mua = std::unique_ptr<B>();
}