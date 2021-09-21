int main() {
    int a = 100;
    int *p = &a;

    // p -> int *
    // *p -> int &
    // so r is int &
    decltype(*p) r = a;

    // pp is int **
    decltype(&p) pp;
}