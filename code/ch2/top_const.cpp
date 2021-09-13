int main() {
    int i = 0;

    int *const p1 = &i;
    const int ci = 42;
    const int *p2 = &i;

    const int *const p3 = p2;
    const int &r = ci;

    i = ci;
    p2 = p3;
    p2 = &i;

    // int &r = ci;
    const int &r = i;

    // int *p = p3;
}