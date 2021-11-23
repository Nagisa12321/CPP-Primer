#include "primer.h"
using namespace std;

void func0(int *pi) {}
void fn(int, int) {}
void func1(void (*fn)(int, int)) {}

void func_array(int ia[]) {
    for (int i = 0; i < 20; ++i)
        cout << ia[i] << " ";
}

int main() {
    cout << "test1: " << endl;
    int ia[10] = { 0 };
    func0(ia);
    func1(fn);
    func1(&fn);

    cout << "\ntest2: " << endl;
    int ia2[10] = { 0 };
    func_array(ia2);
    return 0;
}