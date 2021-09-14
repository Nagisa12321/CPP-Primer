int main() {
    int i = 42;
    
    // a and b are both int;
    decltype(i) a = 10;
    auto b = i;

    // c is const int, d is just int
    const int j = 1024;
    decltype(j) c = 10;
    auto d = j;
}