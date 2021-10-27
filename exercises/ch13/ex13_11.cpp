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

    ~HasPtr() {
        cout << "destructor. " << endl;
        delete ps;
    }
private:
    string *ps;
    int i;
};

int main() {
    HasPtr ptr;
    return 0;
}