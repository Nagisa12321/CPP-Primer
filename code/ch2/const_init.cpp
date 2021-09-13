int main() {
    int i = 42;
    
    const int &r1 = i;
    const int &r2 = 42;
    const int &r3 = r1 * 2;

    // int &r4 = r1 * 2;

    double dval = 3.14;
    // the complier:
    // int tmp = dval;
    // const int &ri = tmp;
    const int &ri = dval;
}