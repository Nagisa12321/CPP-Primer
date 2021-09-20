#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::begin;
using std::end;

int main() {
    char ch[] = "hello world";
    char *p = "hello";
    string str_stack1(ch);
    string str_stack2(p);
    string *str_heap = new string(ch);

    cout << (void *)p << endl;
    cout << (void *)ch << endl;

    cout << (void *)str_stack1.c_str() << endl;
    cout << (void *)str_stack2.c_str() << endl;

    cout << (void *)str_heap << endl;
    cout << (void *)str_heap->c_str() << endl;
}