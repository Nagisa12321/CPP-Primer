int main() {
    int i = 0, &r = i;

    auto a = r;     // so a = 0(int)

    //////////////////////////////////

    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    // ignore high-level const
    // but not ignore low-level const

    const auto f = ci;

    auto &g = ci;
    // auto &h = 42;
    const auto &j = 42;

    //////////////////////////////

    auto k = ci, &l = i;
    auto &m = ci, *p = &ci;
    // auto &n = i, *p2 = &ci;
}