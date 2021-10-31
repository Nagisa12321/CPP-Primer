#include "primer.h"
using namespace std;

int get_value() { return 42; }

int main() {
    
    int &&value = get_value();
    cout << value << endl;

    string &&rrs = string("hello");
    return 0;
}