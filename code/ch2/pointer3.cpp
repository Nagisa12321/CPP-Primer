int main() {
    int i = 42;
    int *pi = 0;    // null pointer
    int *pi2 = &i;  // point to i;
    int *pi3;       // Uninitialized pointer

    pi3 = pi2;      // pi3 point to i;
    pi2 = 0;        // pi2 now is a null pointer
                    // but pi3 point to i;
}