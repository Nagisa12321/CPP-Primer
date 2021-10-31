#include "primer.h"
using namespace std;

int main() {
    int *pi = new int(42);

    int &&rr = move(*pi);
    cout << rr << endl;
    delete pi;
    
    cout << rr << endl;
    return 0;
}