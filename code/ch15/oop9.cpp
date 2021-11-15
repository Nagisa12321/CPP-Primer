#include "primer.h"
using namespace std;

class base {
public:
    void pub_mem();

protected:
    int prot_mem;

private:
    char priv_mem;
};

struct pub_derv : public base {
    int f() { return prot_mem; }
    // char g() { return priv_mem; }
};

struct priv_derv : private base {
    int f1() { return prot_mem; }
    // int g1() { return spriv_mem; }
};

void test(base &b) {
    b.pub_mem();
}

int main() {
    pub_derv pb1;
    priv_derv pb2;

    pb1.pub_mem();
    // pb2.pub_mem();

    test(pb1);
    // test(pb2);
    return 0;
}