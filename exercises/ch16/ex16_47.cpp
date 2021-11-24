#include "primer.h"
using namespace std;

template <typename F, typename T1, typename T2>
void flip(F f, T1 &&t1, T2 &&t2) { 
    f(std::forward<T1>(t1), std::forward<T2>(t2)); 
}

void fn1(int a, int b) { printf("void fn1(%d, %d)\n", a++, b++); }
void fn2(int &a, int &b) { printf("void fn2(%d, %d)\n", a++, b++); }
void fn3(int &&a, int &&b) { printf("void fn3(%d, %d)\n", a++, b++); }

int main() {
    {
        printf("test fn1: \n");
        flip(fn1, 10, 20);
        int i = 10, j = 20;
        flip(fn1, i, j);
        printf("i=%d, j=%d\n", i, j);
    }
    {
        printf("\ntest fn2: \n");
        int i = 10, j = 20;
        flip(fn2, i, j);
        printf("i=%d, j=%d\n", i, j);
    }
    {
        printf("\ntest fn3: \n");
        flip(fn3, 10, 20);
        int i = 10, j = 20;
        flip(fn3, std::move(i), std::move(j));
    }
    return 0;
}