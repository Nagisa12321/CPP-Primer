#include "primer.h"
using namespace std;

class debug_delete {
public:
    template <typename _PointerType>
    void operator()(_PointerType *p) {
        cout << "will delete " << p << endl;
    } 
};

int main() {
    unique_ptr<int, debug_delete> p0(new int(55), debug_delete());
    return 0;
}