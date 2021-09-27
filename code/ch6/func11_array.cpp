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
using std::begin;
using std::end;

void print1(const char *cp) {
    if (cp) {
        while (*cp)
            cout << *cp++;
        cout << endl;
    }
}

void print2(const int *begin, const int *end) {
    while (begin != end) 
        cout << *begin++ << " ";
    cout << endl;
}

void print3(const int ia[], size_t sz) {
    for (int i = 0; i < sz; i++) {
        cout << ia[i] << " ";
    }
    cout << endl;
}

int main() {
    char *str = "Hello world";
    char str1[3] = {'C', '+', '+'};
    print1(str);
    print1(str1);
    print1("Hello world!");

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print2(begin(arr), end(arr));
    print3(arr, end(arr) - begin(arr));
    return 0;
}