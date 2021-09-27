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
using std::begin;
using std::end;
using std::map;

void change_pointer(int *&p1, int *&p2) {
    int *tmp = p1;
    p1 = p2;
    p2 = tmp;
}

int main() {
    int i = 10, j = 20;
    int *p1 = &i, *p2 = &j;
    cout << "p1=" << p1 << ", *p1=" << *p1 << endl;
    cout << "p2=" << p2 << ", *p2=" << *p2 << endl; 
    change_pointer(p1, p2);
    cout << "p1=" << p1 << ", *p1=" << *p1 << endl;
    cout << "p2=" << p2 << ", *p2=" << *p2 << endl;

    return 0;
}