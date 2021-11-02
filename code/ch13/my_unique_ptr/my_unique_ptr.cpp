#include "my_unique_ptr.h"

my_unique_ptr::my_unique_ptr() :
    p(nullptr) {
}

my_unique_ptr::my_unique_ptr(int *p) :
    p(p) {
}

my_unique_ptr::my_unique_ptr(my_unique_ptr &&ptr) noexcept :
    p(ptr.p) {
    ptr.reset();
};

my_unique_ptr::~my_unique_ptr() {
    delete p;
}

int *my_unique_ptr::release() {
    int *tmp = p;
    p = nullptr;
    return tmp;
}

void my_unique_ptr::reset(int *n_p) {
    delete p;
    p = n_p;
}

int &my_unique_ptr::operator*() {
    return *p;
}


