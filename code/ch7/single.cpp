#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

class Single {
private:
    Single() {
        cout << "init!" << endl;
    }

    int v = 20;
public:
    static Single *get_instance() {
        static Single s;
        return &s;
    }

    void val(int i) { this->v = i; }
    int val() { return this->v; }
};

// Single *Single::s = new Single();

int main() {
    cout << "hello" << endl;    
    Single *s1 = Single::get_instance();
    Single *s2 = Single::get_instance();

    cout << s1 << endl;
    cout << s2 << endl;
    s1->val(30);

    cout << s1->val() << endl;
    cout << s2->val() << endl;
    return 0;
}
