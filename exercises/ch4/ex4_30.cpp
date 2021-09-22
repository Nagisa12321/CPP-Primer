#include <iostream>
#include <vector>   

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::rand;

int f() { return -1; }

struct mem_struct {
    int mem[1024];
};

int main() {
    int x = 1024, y = 2048;
    mem_struct *p;
    int a = 1, b = 2, i = 20;

    // (a) - 2052
    cout << (sizeof x + y) << endl;     
    cout << ((sizeof x) + y) << endl;

    // (b) - 4
    cout << (sizeof p->mem[i]) << endl;
    cout << (sizeof(p->mem[i])) << endl;

    // (c) - 0
    cout << (sizeof a < b) << endl;
    cout << ((sizeof a) < b) << endl;

    // (d) - 4
    cout << (sizeof f()) << endl;
    cout << (sizeof(f())) << endl;
}