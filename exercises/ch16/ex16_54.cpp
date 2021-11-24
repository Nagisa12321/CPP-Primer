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

class not_printable_class {};


int main() {
    /* ex16_54.cpp:12:9: error:
     no match for ‘operator<<’ (operand types are ‘std::ostream’ 
     {aka ‘std::basic_ostream<char>’} and
      ‘const not_printable_class’) */
    print(cout, 10, "hello world", not_printable_class(), 1024 / 2);
    return 0;
}