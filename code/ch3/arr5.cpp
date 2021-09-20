#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    int arr[10];

    int *ptrs[10];                  // an array that fill with 10 (int *)
    char *chptrs[10];               // an array that fill with 10 (char *)
    cout << sizeof(ptrs) << endl;   // 80
    cout << sizeof(chptrs) << endl; // 80
                                    // because a ptr is 8 byte!

    // int &refs[10];
    // not exist a array of ref, because ref
    // does not occupies memory space

    int(*Parray)[10] = &arr;
    cout << sizeof(Parray) << endl; // 8

    int(&arrRef)[10] = arr;
    cout << sizeof(arrRef) << endl; // 40

    int *(&arry)[10] = ptrs;

    //////////////////////////////

    int i = 10;
    int *pi = &i;
    int *(&rpi) = pi;
}