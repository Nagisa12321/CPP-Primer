#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

typedef string Type;
Type initVal();

class Exercises {
public:
    typedef double Type;
    Type setVal(Type);
    Type initVal();
private:
    int val;
};

Exercises::Type Exercises::setVal(Type parm) {
    val = parm + initVal();
    return val;
}

int main() { 
    return EXIT_SUCCESS;
}