#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;


class X {
public:
    X(istream &in) {
        in >> x >> y >> z;
    }

    void show() {
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
        cout << "z=" << z << endl;
    }

private:
    int x;
    int y;
    int z;
};
int main() {
    X x(cin);
    x.show();
    return EXIT_SUCCESS;
}