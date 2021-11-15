#include "primer.h"
using namespace std;

class base {
public:
    virtual int fcn();
};

class d1 : public base {
public:
    int fcn(int);
    virtual void f2();
};

class d2 : public d1 {
public:
    int fcn();
    int fcn(int);
    void f2();
};

int main() {

    base bobj; d1 d1obj; d2 d2obj;
    base *bp1 = &bobj, *bp2 = &d1obj, *bp3 = &d2obj;
    bp1->fcn();
    bp2->fcn();
    bp3->fcn();

    d1 *d1p = &d1obj, *d2p = &d2obj;
    // bp2->f2();
    d1p->f2();
    d2p->f2();

    base *p1 = &d2obj; d1 *p2 = &d2obj; d2 *p3 = &d2obj;

    return 0;
}