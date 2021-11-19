#include "primer.h"
using namespace std;

template <typename T, unsigned size>
void print(const T (&ta)[size]) {
    cout << "[";
    for (int i = 0; i < size; ++i) {
        cout << ta[i];
        if (i == size - 1) cout << "]" << endl;
        else cout << ", ";
    }
    cout << flush;
}

int main() {
    int ia[10];
    for (int i = 0; i < 10; ++i) 
        ia[i] = rand() % 550;
    print(ia);
    return 0;
}