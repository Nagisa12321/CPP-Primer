#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

class Debug {
    friend int main();
public:
    constexpr Debug(bool b = true) :
        hw(b), io(b), other(b) {} 
    constexpr Debug(bool h, bool i, bool o) :
        hw(h), io(i), other(o) {}

    void set_io(bool b) { io = b; }
    void set_hw(bool b) { hw = b; }
    void set_other(bool b) { other = b; }
private:
    bool hw;
    bool io;
    bool other;
};

int main() {
    Debug io_sub(false, true, false);
    cout << io_sub.hw << " " << io_sub.io << " " << io_sub.other << endl;
    io_sub.set_hw(true);
    cout << io_sub.hw << " " << io_sub.io << " " << io_sub.other << endl;
    return EXIT_SUCCESS;
}