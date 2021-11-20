#include "primer.h"
using namespace std;

template <typename T> class Pal;
class C {
    friend class Pal<C>;
    template <typename T> friend class Pal2;
};

template <typename T>
class C2 {
    friend class Pal<T>;
    template <typename X> friend class Pal2;
    friend class Pal3;
};

int main() {
    
    return 0;
}