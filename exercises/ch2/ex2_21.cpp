int main() {
    int i = 0;

    // (a)
    // double *dp = &i;
    // (double *) <-- (int *)

    // (b)
    // int *ip = i;
    // should '&i' or '(int *) i'

    // (c)
    int *p = &i;
}