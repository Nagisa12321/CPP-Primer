#include "primer.h"
using namespace std;

class base {
public:
    virtual void hello() { printf("base: hello world!\n"); }
    void bye() { printf("bye!\n"); }
};

class derived : public base {
private:
    void hello() { printf("derived: hello world!\n"); }
    using base::bye;
};

void say_hello(base &b) { b.hello(); }
void say_bye(base &b) { b.bye(); }

int main() {
    derived d;
    say_hello(d);
    say_bye(d);

    // d.bye();
    // d.hello();

    base *bp = new derived;
    bp->hello();
    bp->bye();
    return 0;
}