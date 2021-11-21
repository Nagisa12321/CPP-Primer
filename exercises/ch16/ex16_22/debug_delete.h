#ifndef DEBUG_DELETE_H
#define DEBUG_DELETE_H
#include <iostream>
class debug_delete {
public:
    debug_delete(std::ostream &s) : os(s) {}
    template <typename PointerType> void operator()(PointerType *p) {
        os << "will delete the pointer " << p << std::endl;
        delete p;
    }
private:
    std::ostream &os;
};
#endif // DEBUG_DELETE_H
