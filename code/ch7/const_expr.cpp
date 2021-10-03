#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

class Debug {
public:
    constexpr Debug(bool b = true) :
        hw(b), io(b), other(b) {} 
    constexpr Debug(bool h, bool i, bool o) :
        hw(h), io(i), other(o) {}
// private:
    bool hw;
    bool io;
    bool other;
};

int main() {
    constexpr Debug io_sub(false, true, false);
    return EXIT_SUCCESS;
}