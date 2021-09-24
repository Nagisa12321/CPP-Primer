#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;

char *get_string() {
    return "hello world";
}

int main() {
    // cast array to pointer
    int ia[10];
    // pointer to the first value;
    int *p = ia;
    // pointer to array
    int (*pp)[10] = &ia;


    char *cp = get_string();
    if (cp) {
        // ... 
    }
    while (*cp) {
        // ... 
    }


    int i;
    const int &j = i;
    const int *p = &i;
    // int &r = j;
    int *q = p;

    string s, t = "a value";
    while (cin >> s) {
        // ... 
    }
}