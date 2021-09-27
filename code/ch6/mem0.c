#include <stdio.h>

int not_alloc ;
int alloc = 100;
int alloc1 = 100;
int alloc2 = 100;

int main() {
    printf("not_alloc: %p\n", &not_alloc);
    printf("not_alloc: %d\n", not_alloc);
    printf("alloc: %p\n", &alloc);
}