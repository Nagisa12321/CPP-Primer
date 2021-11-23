#include "primer.h"
using namespace std;

template <typename T> void g(T &&val) { vector<T> v; }

int main() {
    int i = 42;
    // g(i);       // crash
    g(42);      // make a int vector    
    return 0;
}