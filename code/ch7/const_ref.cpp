#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

class ref {
public:
    ref(int ii);

    void show_ri() {
        cout << ri << endl;
        cout << &ri << endl;
    }
private:
    int &ri;
};

ref::ref(int ii) : ri(ii) {
    cout << &ii << endl;
}

int main() {
    ref c(456);
    c.show_ri();
    return EXIT_SUCCESS;
}