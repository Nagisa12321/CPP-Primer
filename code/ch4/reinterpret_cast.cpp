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
    int ival = 0x12345678;
    int *ip = &ival;

    char *pc = reinterpret_cast<char *>(ip);
    void *tmp = static_cast<void *>(ip);
    char *pc1 = static_cast<char *>(tmp);

    printf("%x\n", *pc);
    printf("%x\n", *pc1);
}