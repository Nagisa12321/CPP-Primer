#include <iostream>

void swap_ref(int &i, int &j) {
    int tmp = i;
    i = j;
    j = tmp;
}

void swap_p(int *i, int *j) {
    int tmp = *i;
    *i = *j;
    *j = tmp;
}

int main() {
    int i1 = 10, i2 = 20;
    std::cout << "i1: " << i1 << ", i2: " << i2 << std::endl;
    swap_ref(i1, i2);
    std::cout << "i1: " << i1 << ", i2: " << i2 << std::endl;
    swap_p(&i1, &i2);
    std::cout << "i1: " << i1 << ", i2: " << i2 << std::endl;
}