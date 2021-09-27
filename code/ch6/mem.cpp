#include <iostream>
#include <vector>
#include <cstdio>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;
using std::map;

char str_global[] = "world";

int main() {
    char str_stack[] = "hello";
    char *ch = new char('A');

    cout << "str_stack's address: " << (void *) str_stack << endl;
    cout << "str_global's address: " << (void *) str_global << endl;
    cout << "ch's address: " << (void *) ch << endl;
    return 0;
}