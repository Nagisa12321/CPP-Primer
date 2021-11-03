#include "primer.h"
using namespace std;

class if_then_else {
public:
    int operator()(bool condition, int a, int b) {
        if (condition) return a;
        else return b;
    }
};

int main() {
    if_then_else ite;
    cout << ite(1, 10, 20) << endl;
    cout << ite(0, 10, 20) << endl;
    return 0;
}