int get_size() {
    return -1;
}

constexpr int size() {
    int sum = 0;
    for (int i = 0; i < 10; i++) 
        sum += i;
    return sum;
}

int main() {
    // is constexpr
    const int max_files = 20;
    // is constexpr
    const int limit = max_files + 1;
    // is not constexpr
    int staff_size = 27;
    // is not constexpr
    const int sz = get_size();


    constexpr int mf = 20;
    constexpr int limi_t = mf + 1;
    constexpr int s_z = size();


}