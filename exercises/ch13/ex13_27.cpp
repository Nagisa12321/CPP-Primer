#include "primer.h"
using namespace std;

class HasPtr {
    friend int main();
public:
    HasPtr(string s) :
        value(new string(s)), use_count(new int(1)), i(0) {
    }

    HasPtr(const HasPtr &has) :
        value(has.value), use_count(has.use_count), i(has.i) {
            ++*use_count;
    }
    ~HasPtr() {
        if (!--*use_count) {
            cout << "delete." << endl;
            delete use_count;
            delete value;
        }
    }

    HasPtr &operator=(const HasPtr &has) {
        if (!--*use_count) {
            cout << "delete." << endl;
            delete use_count;
            delete value;
        }
        use_count = has.use_count;
        value = has.value;
        i = has.i;
        ++*use_count;

        return *this;
    }

private:
    int *use_count;
    string *value;
    int i;
};

int main() {
    HasPtr h1("hello");
    {
        HasPtr h2(h1);
        h2.value->push_back('!');
    }
    cout << *h1.value << endl;
    cout << "----" << endl;

    HasPtr h3("hello1");
    HasPtr h4("hello2");
    h3 = h4;

    cout << "----" << endl;
    return 0;
}