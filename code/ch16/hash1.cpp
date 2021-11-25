#include "primer.h"

class A {};

namespace std {
template <>
struct hash<A> {
    size_t operator()(const A &arg) const;
};

template <>
struct equal_to<A> {
    bool operator()(const A &, const A &);
};
} // namespace std

size_t std::hash<A>::operator()(const A &arg) const {
    return 1;
}

bool std::equal_to<A>::operator()(const A &, const A &) {
    return 1;
}


int main() {
    
    std::cout << "test1: " << std::endl;
    std::unordered_map<A, int> map;


    map[A()] = 1024;
    std::cout << map[A()] << std::endl;
    return 0;
}