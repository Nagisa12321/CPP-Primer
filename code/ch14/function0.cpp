#include "primer.h"
using namespace std;

void fn() { cout << "func2" << endl; } 
void func1() { cout << "func1" << endl; }

class Foo {
public:
    void operator()() { cout << "func4" << endl; }
};

int main() {
    void (*func2)() = fn;
    auto func3 = [] {cout << "func3" << endl; };
    Foo func4;
    
    cout << "test start: " << endl;
    func1();
    func2();
    func3();
    func4();
    return 0;
}