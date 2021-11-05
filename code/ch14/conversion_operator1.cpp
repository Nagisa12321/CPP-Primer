#include "primer.h"
using namespace std;

class small_int {
public:
    small_int(int i = 0) : val(i) { 
        if (i < 0 || i > 255) 
            throw out_of_range("bad value");
    }

    operator int() { return val; } 
private:
    size_t val;
};

class hello {
public:
    operator string() const { return "hello world"; }
};

int main() {
    small_int i = 200;
    int j = i + 300;
    cout << j << endl;

    hello hello;
    cout << (string) hello << endl;

    return 0;
}