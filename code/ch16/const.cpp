#include "primer.h"
using namespace std;

void func0(const int i) {
    
}

void func1(int i) {

}

int main() {
    const int i0 = 1024;
    int i1 = 42;

    func0(i1);
    func1(i0);
    return 0;
}