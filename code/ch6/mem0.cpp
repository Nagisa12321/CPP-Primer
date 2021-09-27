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

int not_alloc;
int alloc = 100;

int main() {
    char *chs = "hello world";
    cout << "BSS:\t" <<(void *)&not_alloc << endl;
    cout << "data:\t" <<(void *)&alloc << endl;
    cout << "data:\t" <<(void *)chs << endl;

    char *cp = new char('A');
    cout << "heap:\t" <<(void *)cp << endl;

    char str[] = "hello";
    cout << "stack:\t" <<(void *)str << endl;

    cout << "main:\t" << (void *)main << endl;
    return 0;
}