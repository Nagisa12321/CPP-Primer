#include "primer.h"
using namespace std;

int main() {
    string a = "hello";
    string b = move(a);

    a.push_back('b');
    cout << a << endl;
    cout << b << endl;
    return 0;
}