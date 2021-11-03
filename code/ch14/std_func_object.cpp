#include "primer.h"
using namespace std;

int main() {
    plus<int> int_add;
    cout << int_add(10, 20) << endl;

    plus<string> string_add;
    cout << string_add("a", "b") << endl;
    return 0;
}