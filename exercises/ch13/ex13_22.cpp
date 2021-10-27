#include "primer.h"
using namespace std;

class HasPtr {
    friend int main();
public:
    HasPtr(int val = 0, string *sp = new string()) :
        val(val), sp(sp) {
    }

    HasPtr(const HasPtr &hp) :
        val(hp.val), sp(new string(*hp.sp)) {
    }

    HasPtr &operator=(const HasPtr &hp) {
        val = 100;
        string *tmpsp = new string(*hp.sp);
        delete sp;
        sp = tmpsp;
        return *this;
    }

    ~HasPtr() {
        delete sp;
    }

private:
    int val;
    string *sp;
};

int
main() {
    HasPtr hp1(42, new string("hello"));
    HasPtr hp2(hp1);
    hp1.val = 100, *hp1.sp = "world";
    cout << "hp1: " << hp1.val << ", " << *hp1.sp << endl;
    cout << "hp2: " << hp2.val << ", " << *hp2.sp << endl;
    return 0;
}