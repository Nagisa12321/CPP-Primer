int main() {
    // (a)
    // int i = -1, &r = 0;

    // (b)
    int i2 = 1;
    int *const p2 = &i2;

    // (c)
    const int i = -1, &r = 0;

    // (d)
    const int *const p3 = &i2;

    // (e)
    const int *p1 = &i2;

    // (f)
    // const int &const r2;

    // (g)
    const int i2 = i, &r = i;
}