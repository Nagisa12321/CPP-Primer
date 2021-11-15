#include "primer.h"
using namespace std;

class base {
public:
    base(int i) :
        pi(new int(i)) {
    }

    ~base() {
        delete pi;
        cout << "delete base::pi" << endl;
    }

private:
    int *pi;
};

class derived : public base {
public:
    derived(int i, int j) :
        base(i),
        derived_pi(new int(j)) {
    }

    ~derived() {
        delete derived_pi;
        cout << "delete derived::pderived_pi" << endl;
    }

private:
    int *derived_pi;
};

int main() {
    derived *bp = new derived(100, 200);
    delete bp;
    return 0;
}