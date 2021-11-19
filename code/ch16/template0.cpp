#include "primer.h"
using namespace std;

int compare(const string &v1, const string &v2) {
    cout << "compare string" << endl;
    if (v1 < v2) return -1;
    else if (v2 < v1) return 1;
    else return 0;
}

int compare(const double &v1, const double &v2) {
    cout << "compare double" << endl;
    if (v1 < v2) return -1;
    else if (v2 < v1) return 1;
    else return 0;
}

template <typename T>
int compare(const T &v1, const T &v2) {
    cout << "compare T" << endl;
    if (v1 < v2) return -1;
    else if (v2 < v1) return 1;
    else return 0;
}

int main() {
    int i = compare(string("hello"), string("world"));
    int j = compare(123.0, 456.0);
    int k = compare(123, 456);
    return 0;
}