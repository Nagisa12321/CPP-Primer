#include "primer.h"
using namespace std;

class Base {};
class Pub_Derv : public Base { void memfcn(Base &b) { b = *this; }; };
class Priv_Derv : private Base { void memfcn(Base &b) { b = *this; }; };
class Prot_Derv : protected Base { void memfcn(Base &b) { b = *this; }; };
class Derived_from_Public : public Pub_Derv { void memfcn(Base &b) { b = *this; }; };
class Derived_from_Private : public Priv_Derv { /* void memfcn(Base &b) { b = *this; }; */ };
class Derived_from_Protected : public Prot_Derv { void memfcn(Base &b) { b = *this; }; };

int main() {
    Pub_Derv d1;
    Priv_Derv d2;
    Prot_Derv d3;
    Derived_from_Public dd1;
    Derived_from_Private dd2;
    Derived_from_Protected dd3;

    Base *p = &d1;
    // p = &d2;
    // p = &d3;
    p = &dd1;
    // p = &dd2;
    // p = &dd3;


    return 0;
}