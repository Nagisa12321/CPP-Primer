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

vector<char *> v; 

int test() {
    char ch[] = "hello world";
    static char ch1[] = "hello world";
    static char ch2[] = "hello";
    static char ch3[] = "world";
    cout << "ch1 " << (void *) ch1 << endl;
    cout << "ch " << (void *) ch << endl;

    v.push_back(ch1);
    v.push_back(ch2);
    v.push_back(ch3);

    return -1;  
}

int main() {
    test();

    for (char *ch : v)
        cout << ch << endl;
    return 0;
}