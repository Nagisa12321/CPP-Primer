#include "primer.h"
using namespace std;

class base;
class sneaky;
class pal {
public:
    int f(base b) { return b.prot_mem; }
    // int f2(sneaky s) { return s.j; }
    int f3(sneaky s) { return s.priv_mem; }
};

class d_pal : public pal {
    // int f4(base b) { return b.prot_mem; }
};

class base {
    friend class pal;

public:
    virtual void pub_mem();

protected:
    int prot_mem;

private:
    char priv_mem;
};

class sneaky : public base {

public:
    virtual void pub_mem();

private:
    int j;

};

int main() {
    
    return 0;
}