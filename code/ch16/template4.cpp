#include "primer.h"
#include <cstring>
using namespace std;

template<unsigned N, unsigned M>
void show(const int (&p1)[N], const int (&p2)[M]) {
    cout << "arr1: ";
    for (int i = 0; i < N; ++i) { cout << p1[i] << " "; }
    cout << "\narr2: ";
    for (int i = 0; i < M; ++i) { cout << p2[i] << " "; }
    cout << endl;
}

template<unsigned N, unsigned M>
int compare(const char (&p1)[N], const char (&p2)[M]) {
    return strcmp(p1, p2);
}

template<int A, int B>
void print_ab() {
    cout << A << ", " << B << endl;
}

int main() {
    int ia[] = {0, 1, 3};
    int *p = ia;
    int (*pa)[3] = &ia;
    cout << (*pa)[2] << endl;
    int (&ra)[3] = ia;
    cout << pa << endl;
    cout << &ra << endl;
    cout << ra[2] << endl;

    cout << "\ntest1 start: " << endl;
    int ia1[10] = {0};
    int ia2[3] = {0, 1, 2};
    show<10, 3>(ia1, ia2);

    cout << "\ntest2 start: " << endl;
    cout << compare("hi", "mom") << endl;
    cout << compare("12345", "12346") << endl;

    cout << "\ntest3 start: " << endl;
    print_ab<10, 20>();
    static const int a = 42, b = 1024;
    print_ab<a, b>();
    return 0;
}