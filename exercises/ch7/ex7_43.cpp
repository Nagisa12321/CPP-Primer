#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

class NoDefault {
public:
    NoDefault(int val) { this->val = val; }

private:    
    int val;
};

class C {
public: 
    C() : nod(0) {};
private:
    NoDefault nod;
};

int main() {    
    C c;
    return EXIT_SUCCESS;
}