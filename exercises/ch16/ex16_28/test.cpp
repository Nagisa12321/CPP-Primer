#include <memory>
#include <iostream>
#include "my_shared_ptr.h"
#include <functional>
using namespace std;

template class my_shared_ptr<int>;

int main() {
    {
        cout << "test1: " << endl;
        my_shared_ptr<int> p0(new int(42));
    }
    {
        cout << "\ntest2: " << endl;
        my_shared_ptr<int> p0(new int(42));
        my_shared_ptr<int> p1(p0);
    }
    {
        cout << "\ntest3: " << endl;
        my_shared_ptr<int> p0(new int(42));
        my_shared_ptr<int> p1(new int(1024));
        my_shared_ptr<int> p2(p0);
        my_shared_ptr<int> p3(p1);
        p3 = p2;
    }
    {
        cout << "\ntest4: " << endl;
        my_shared_ptr<string> p0(new string("hello world!"), [](string *s) {
            cout << "will delete " << s << ", \"" << *s << "\"" << endl;
            delete s;
        });
    }
    {
        cout << "\ntest5" << endl;
        my_shared_ptr<string> p0(new string("hello world!"), [](string *s) {
            cout << "will delete " << s << ", \"" << *s << "\"" << endl;
            delete s;
        });
        my_shared_ptr<string> p1(p0);
    }

}