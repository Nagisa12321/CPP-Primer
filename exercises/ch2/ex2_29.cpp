int main() {
    int i = 10;
    const int ic = 20;
    int *p1;
    const int *const p3 = &i;
    int *const p2 = &i;

    // (a)
    i = ic;

    // (b)
    // p1 = p3;

    // (c)
    // p1 = &ic;

    // (d)
    // p3 = &ic;

    // (e)
    // p2 = p1;

    // (f)
    // ic = *p3;
}