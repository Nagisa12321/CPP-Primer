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
using std::runtime_error;

int main() {
    try {
        int isbn1, isbn2;
        cin >> isbn1 >> isbn2;

        if (isbn1 != isbn2) 
            throw new string("hello world");

        cout << isbn1 + isbn2 << endl;
        return 0;
    } catch(string *s) {
        cout << *s << endl;
        delete s;
        return 100;
    }
}