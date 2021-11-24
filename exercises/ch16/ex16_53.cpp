#include "primer.h"
using namespace std;

template <typename T>
ostream &print(ostream &out, const T &t) {
    out << t;
    return out;
}

template <typename T, typename... Args>
ostream &print(ostream &out, const T &t, const Args &...args) {
    out << t << ", ";
    return print(out, args...);
}

class printable_class {};

ostream &operator<<(ostream &out, const printable_class &) {
    out << "this is the printalbe class!";
    return out;
}

int main() {
    print(cout, 10);
    print(cout, 10, "hello world");
    print(cout, 10, "hello world");
    print(cout, 10, "hello world", printable_class(), 1024 / 2);
    return 0;
}