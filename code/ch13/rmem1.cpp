#include "primer.h"
using namespace std;

int main() {
    cout << "test3: " << endl;
    string s6 = "hi", s7 = "hello";
    cout << (s6 + s7).c_str() << endl;
    cout << (void *)(s6 + s7).c_str() << endl;
    (s6 + s7) = "why?????";

    long addr;
    cout << "input the addr: ";
    cin >> hex >> addr;
    cout << "addr:" << (char *) addr << endl;

    cout << (s6 + s7).c_str() << endl;
    cout << (void *)(s6 + s7).c_str() << endl;

    return 0;
}