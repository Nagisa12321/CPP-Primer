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

void fact() {
    int in;
    cout << "input a number: " << endl;
    cin >> in;

    int res = 1;
    while (in > 1) 
        res *= in--;
    
    cout << res << endl;
}

int main() {
    fact();
    return 0;
}