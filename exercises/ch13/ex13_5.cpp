#include "primer.h"
using namespace std;

class HasPtr {
public:
    HasPtr(const string &s = string()) : ps(new string(s)), i(0) {  }
    HasPtr(const HasPtr &that) : ps(new string(*that.ps)), i(that.i) {  }
// private:
    string *ps;
    int i;
};

int main() {
    HasPtr h1("hello");
    cout << h1.ps << ": " << *h1.ps << endl;
    HasPtr h2 = h1;
    cout << h2.ps << ": " << *h2.ps << endl;
    return 0;
}