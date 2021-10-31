#include "primer.h"
using namespace std;

class HasPtr {
    friend int main();
    friend void swap(HasPtr &, HasPtr &);

public:
    HasPtr(int val = 0, string *sp = new string()) :
        val(val), sp(sp) {
    }

    HasPtr(const HasPtr &hp) :
        val(hp.val), sp(new string(*hp.sp)) {
    }

    HasPtr &operator=(const HasPtr &hp) {
        string *tmpsp = new string(*hp.sp);
        delete sp;
        sp = tmpsp;
        val = hp.val;
        return *this;
    }

    void swap(HasPtr &hp) {
        cout << "swap" << endl;
        ::swap(*this, hp);
    }

    bool operator<(const HasPtr &hp) {
        return this->val < hp.val;
    }

    // HasPtr &operator=(HasPtr hp) {
    //     swap(*this, hp);
    //     return *this;
    // }

    ~HasPtr() {
        delete sp;
    }

private:
    int val;
    string *sp;
};

void swap(HasPtr &h1, HasPtr &h2) {
    cout << "HasPtr, swap()" << endl;
    swap(h1.sp, h2.sp);
    swap(h1.val, h2.val);
}


int main() {
    vector<HasPtr> hvec;
    for (int i = 0; i < 10; ++i) {
        HasPtr h(rand() % 20, new string("a"));
        hvec.push_back(h);
    }

    sort(hvec.begin(), hvec.end());

    for (const HasPtr &h : hvec) 
        cout << h.val << ", " << *h.sp << endl;
    return 0;
}