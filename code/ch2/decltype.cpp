double pi() {
    return 3.1415926535;
}

int main() {
    decltype(pi()) dval = 3.14;
    decltype(1) a = 10;

    const int ci = 0, &cj = ci;
    decltype(ci) x = 0;
    decltype(cj) y = x;
    // decltype(cj) z;
}