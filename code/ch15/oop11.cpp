#include "primer.h"
using namespace std;

class base {
public:
    size_t size() const { return n; }

protected:
    size_t n;
};

class derived : private base {
public:
    using base::size;
protected:
    using base::n;
};

int main() {
    
    return 0;
}