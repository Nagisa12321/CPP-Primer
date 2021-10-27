#include "primer.h"
using namespace std;

class shared_int_ptr {
public:
    shared_int_ptr() :
        p(0), cnt(0) {
    }
    shared_int_ptr(int *p) :
        p(p), cnt(new int(1)) {
    }
    shared_int_ptr(const shared_int_ptr &sp) :
        p(sp.p), cnt(sp.cnt) {
        *cnt += 1;
    }
    ~shared_int_ptr() {
        if (cnt) {
            if (*cnt == 1) release();
            else --*cnt;
        }
    }

    shared_int_ptr &operator=(const shared_int_ptr &sp) {
        if (cnt) *cnt -= 1;
        if (cnt && !*cnt) release();
        p = sp.p;
        cnt = sp.cnt;
        if (cnt) *cnt += 1;

        return *this;
    }

    int &operator*() {
        return *p;
    }

private:
    void release() {
        cout << "delete." << endl;
        delete this->cnt;
        delete this->p;
    }
    int *cnt;
    int *p;
};

void fn(shared_int_ptr sp) {
    *sp = 100;
}

int main() {
    // shared_int_ptr sp(new int(1024));
    // {
    //     shared_int_ptr sp2(sp);
    //     cout << *sp2 << endl;
    // }
    // cout << *sp << endl;
    // cout << "----" << endl;

    // shared_int_ptr sp3(new int(2048));
    // shared_int_ptr sp4;
    // sp4 = sp3;
    // *sp4 = 555;
    // cout << *sp3 << endl;
    // cout << *sp4 << endl;

    // cout << "----" << endl;

    // shared_int_ptr sp5(new int(123));
    // fn(sp5);
    // cout << *sp5 << endl;

    // cout << "----" << endl;
    shared_int_ptr sp6(new int(1024));
    shared_int_ptr sp7(new int(2048));
    sp6 = sp7;
    cout << "----" << endl;
    return 0;
}