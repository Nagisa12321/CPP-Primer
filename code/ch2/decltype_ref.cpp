int main() {
    int i = 42, *p = &i, &r = i;
    // decltype(r) a;
    decltype(r + 0) b;  // int b
    // decltype(*p) c;
    decltype(*p + 0) d;

    decltype(i) e;
    decltype((i)) f = i;    // int &
}