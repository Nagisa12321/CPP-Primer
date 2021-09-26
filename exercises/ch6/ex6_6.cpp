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

int fact(int val) {
    static int call_times = 1;
    cout << "fact() has been called " << call_times++ 
         << " times" << endl;
    int res = 1;
    while (val > 1)
        res *= val--;

    return res;
}

int main() {
    for (int i = 0; i < 10; i++) {
        int j = fact(5);
        cout << "5! = " << j << endl;
    }
    return 0;
}