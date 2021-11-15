#include "primer.h"
using namespace std;

class base {
protected:
    int protected_mem;
};

class sneaky : public base {
    friend void func(base &b) {  }
    friend void func(sneaky &s) {  }
    int j;
};

void func(base &b) { /* b.protected_mem = 0; */ }
void func(sneaky &s) { s.j = s.protected_mem = 0; }

int main() {
    
    return 0;
}