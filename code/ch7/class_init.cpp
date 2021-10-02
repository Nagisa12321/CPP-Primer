#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

class X {
    int i;
    int j;

public:
    X(int val) : j(val), i(j) {}
    void show() { 
        cout << "i = " << i << endl;
        cout << "j = " << j << endl;
    }
};

int main() {
    X x(1024);
    x.show();
    return EXIT_SUCCESS;
}