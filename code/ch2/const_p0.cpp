int main() {
    const double pi = 3.14;
    // double *ptr = &pi;
    const double *cptr = &pi;
    // *cptr = 2;

    double dval = 3.14159265;
    cptr = &dval;
}