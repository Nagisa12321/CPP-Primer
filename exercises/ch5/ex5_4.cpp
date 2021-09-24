#include <iostream>
#include <vector>
#include <cstdio>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;

int main() {
    string s = "some string";
    // (a)
    // while (string::iterator iter != s.end()) {
    //     // ... 
    // }

    string::iterator iter = s.begin();
    while (iter != s.end()) {
        // ... ;
    }
}