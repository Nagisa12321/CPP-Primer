#include "primer.h"
using namespace std;

class HasPtr {
public:
    HasPtr(const string &s = string()) : ps(new string(s)), i(0) {  }
    HasPtr(const HasPtr &that) : ps(new string(*that.ps)), i(that.i) {  }
    HasPtr& operator=(const HasPtr &h) {
        cout << "copy(=) operator" << endl;
        delete ps;
        ps = new string(*h.ps);
        return *this;
    }
// private:
    string *ps;
    int i;
};

int main() {
    HasPtr h1("hello"), h2("world");
    cout << h1.ps << ": " << *h1.ps << endl;
    cout << h2.ps << ": " << *h2.ps << endl;

    h1 = h2;
    cout << h1.ps << ": " << *h1.ps << endl;
    cout << h2.ps << ": " << *h2.ps << endl;
    return 0;
}