#include "primer.h"
using namespace std;

class NoDefault {
public:
    NoDefault(int);
};

// template class vector<NoDefault>;
/*
    the version vector<T>::vector<T>(size_t sz) will error  
*/
int main() {
    return 0;
}