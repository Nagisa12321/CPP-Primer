#include "primer.h"
using namespace std;

template <typename F, typename T1, typename T2>
void flip(F f, T1 t1, T2 t2) { f(t1, t2); }

template <typename F, typename T1, typename T2>
void flip1(F f, T1 &&t1, T2 &&t2) { f(t1, t2); }

template <typename F, typename T1, typename T2>
void flip2(F f, T1 &&t1, T2 &&t2) { f(std::forward<T1>(t1), std::forward<T2>(t2)); }

void fn0(int i, int j) {
    cout << "fn0(" << i << ", " << j << ")" << endl;    
}

void fn1(int i, int &j) {
    cout << "fn1(" << i << ", " << j++ << ")" << endl;
}

void fn2(int &&i, int &j) {
    cout << "fn2(" << i << ", " << j++ << ")" << endl;
}

int main() {
    {
        cout << "test1: " << endl;
        flip(fn0, 10, 20);  
    }
    {
        cout << "\ntest2: " << endl; 
        int i = 0, j = 0;
        flip(fn1, i, j);
        cout << i << ", " << j << endl;
        fn1(i, j);
        cout << i << ", " << j << endl;
    }
    {
        cout << "\ntest3: " << endl;
        int i = 0, j = 0;
        flip1(fn1, i, j);
        cout << i << ", " << j << endl;
        fn1(i, j);
        cout << i << ", " << j << endl;
    }
    {
        cout << "\ntest4: " << endl;
        int i = 0, j = 0; 
        // flip1(void(*)(int &&, int &), int &, int &)
        // flip1(fn2, 42, j);
    }
    {
        cout << "\ntest5: " << endl;
        int i = 0, j = 0; 
        flip2(fn1, i, j);
        cout << i << ", " << j << endl;
        flip2(fn2, std::move(i), j);
        cout << i << ", " << j << endl;
    }
    return 0;
}