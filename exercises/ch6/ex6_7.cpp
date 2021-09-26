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

int ret_add() {
    static int ret;
    return ret++;
}

int main() {
    for (int i = 0; i < 10; i++) {
        cout << ret_add() << endl;  
    }
    return 0;
}