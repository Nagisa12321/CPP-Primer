#include "template_.h"

extern template class template_<A>;

void fn1() {
    template_<A> t;
}

int main() {
    return 0;
}

// 16112