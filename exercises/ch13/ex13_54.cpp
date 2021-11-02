#include "primer.h"
using namespace std;

class has_ptr {
    friend void swap(has_ptr, has_ptr);
public:
    has_ptr(int i) : ptr(new int(i)) { cout << "default" << endl; }

    has_ptr(const has_ptr &hp) {
        cout << "copy" << endl;
        ptr = new int(*hp.ptr); 
    }

    has_ptr(has_ptr &&hp) noexcept { 
        cout << "move con" << endl; 
        ptr = hp.ptr;
        hp.ptr = nullptr; 
    }
    
    ~has_ptr() { if (ptr) delete ptr; }

    has_ptr &operator=(has_ptr hp) {
        cout << "opt = <swap>" << endl;
        swap(*this, hp);
        return *this;
    }

    has_ptr &operator=(has_ptr &&hp) noexcept {
        cout << "move opt" << endl;
        if (ptr) delete ptr;
        ptr = hp.ptr;
        hp.ptr = nullptr; 
        return *this;
    }


    void set(int val) { *ptr = val; }
    int get() { return *ptr; }
private:
    int     *ptr;
};

void swap(has_ptr, has_ptr) {}

has_ptr make_has_ptr() {
    has_ptr hp(100);
    hp.set(1024);
    return hp;
}

int main() {
    has_ptr h1(1), h2(1);
    cout << "test start: " << endl;
    h1 = h2;
    return 0;
}