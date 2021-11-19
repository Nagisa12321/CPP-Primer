#include "primer.h"
using namespace std;

template <void (*fn)()>
void run() {
    fn();
}

void hello() {
    printf("hello world!\n");
}

int main() {
    run<hello>();
    return 0;
}