#include "primer.h"
using namespace std;

template <typename T> class Stack {  };
void f1(Stack<char>);                   // Stack<char>
class Exercises {   
    Stack<double> &rsd;                 // Stack<double>
    Stack<int> &si;                     // Stack<int>
};

int main() {
    Stack<char> *sc;                    // nothing
    f1(*sc);                            // nothing
    int iObj = sizeof(Stack<string>);   // Stack<string>
    return 0;
}
