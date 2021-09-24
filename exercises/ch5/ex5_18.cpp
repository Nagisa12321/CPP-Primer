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

int get_response() {
    return 1024;
}

int main() {
    cout << "============= a ===========" << endl;
    do {    
        int v1, v2;
        cout << "Please ener two numbers to sum: " ; 
        if (cin >> v1 >> v2) {
            cout << "Sum is: " << v1 + v2 << endl;
        }
    } while(cin);

    cout << "============= b ===========" << endl;
    while (int ival = get_response()) {
        // ... 
    }

    cout << "============= c ===========" << endl;
    int ival;
    do {
        ival = get_response();
    } while (ival);
    return 0;
}