#include "primer.h"
using namespace std;

template <typename T>
void show(const T &t) { t.show(); }

class A {
public:
    void show() const { cout << "A" << endl; }
};

int main() {
    A a;
    show(a);
    return 0;
}