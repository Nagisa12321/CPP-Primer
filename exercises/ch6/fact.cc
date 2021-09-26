#include "chapter6.h"

int fact(int val) {
    int res = 1;
    while (val > 1) 
        res *= val--;
    return res;
}