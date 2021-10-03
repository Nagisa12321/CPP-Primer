#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

class X {
public:
    X(const string &s) : name(s) {}
    int a = 10;
    int b = 20;
    void public_function() {}
    void print_addr() {
        cout << name << ": " << endl;
        cout << "a: " << &a << endl;
        cout << "b: " << &b << endl;
        cout << "pa: " << &pa << endl;
        cout << "pb: " << &pb << endl;
        cout << "static_val: " << &X::static_val << endl;
    }
    static int get_val() { return static_val; }
    static void set_val(int val) { static_val = val; }
private:
    static int static_val;
    string name;
    int pa = 30;
    int pb = 40;
    void private_function() {}
};

int X::static_val = 200;

X g_x("global");

int main() {
    X x("stack");
    x.set_val(1024);
    cout << g_x.get_val() << endl;
    x.print_addr();
    g_x.print_addr();

    return EXIT_SUCCESS;
}