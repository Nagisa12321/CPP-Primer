#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

struct Data {
    string s;
    int ival;
};

class A {
public:
    int show() { 
        // cout << val << endl;
        return val;
    }
private:
    int val;
};

A g_a;

int main() {
    Data data = { "" };
    cout << data.s << endl;
    cout << data.ival << endl;

    int ia[10]; 
    for (int i = 0; i < 10; i++)
        cout << ia[i] << " ";
    cout << endl;   
    return EXIT_SUCCESS;
}