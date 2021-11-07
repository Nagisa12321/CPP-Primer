#include "primer.h"
using namespace std;

class base {
public:
    string name() { return basename; } 
    virtual void print(ostream &out) { cout << "base::print()" << endl; /* out << basename; */ }
private:
    string basename;
};

class dericed : public base {
public:                                                                     /* the problem here */     
    void print(ostream &out) override { cout << "derice::print()" << endl;     /* base::print(out); out << " " << i;*/ }
private:
    int i;
};

int main() {
    base bobj;
    base *bp1 = &bobj;
    base &br1 = bobj;
    dericed dobj;
    base *bp2 = &dobj;
    base &br2 = dobj;

    cout << "(a)" << endl;
    bobj.print(cout);       // base

    cout << "(b)" << endl;
    dobj.print(cout);       // dericed

    cout << "(c)" << endl;
    bp1->name();            // base

    cout << "(d)" << endl;
    bp2->name();            // base

    cout << "(e)" << endl;
    br1.print(cout);        // base

    cout << "(f)" << endl;
    br2.print(cout);        // dericed

    return 0;
}