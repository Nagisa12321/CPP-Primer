#include "primer.h"
#include "str_vector.h"
using namespace std;

int main() {
    str_vector svec;
    svec.push_back("hello");

    string s = "hello";
    svec.push_back(s);
    return 0;
}