#include "primer.h"
using namespace std;

class base {
public:
    static void statmem();
};

class derived : public base {
    void f(const derived &);
};

inline void derived::f(const derived &) {
    base::statmem();
    base a;
    a.statmem();
    derived::statmem();
    statmem();    
}


int main() {
    return 0;
}