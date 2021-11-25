#include "primer.h"
#include <cstring>
using namespace std;

template <typename T>
int times(const vector<T> &tvec, const T &target) {
    int times = 0;
    for (const T &t : tvec)
        if (target == t) ++times;
    return times;
}

template <>
int times(const vector<const char *> &cvec, const char *const &target) {
    int times = 0;
    for (const char *const &str : cvec)
        if (strcmp(str, target) == 0)
            ++times;
    return times;
}

int main() {
    vector<double>  dvec;
    vector<int>     ivec;
    vector<string>  svec;
    for (int i = 0; i < 20; ++i) {
        dvec.push_back(rand() % 8);
        ivec.push_back(rand() % 8);
        svec.push_back(to_string(rand() % 8));
    }
    primer_show(dvec);
    primer_show(ivec);
    primer_show(svec);
    cout << "7 shows " << times(dvec, 7.0) << " times" << endl;
    cout << "7 shows " << times(ivec, 7) << " times" << endl;
    cout << "7 shows " << times(svec, string("7")) << " times" << endl;

    vector<const char *> cvec = {"hi", "hello", "hi"};
    const char *hi = "hi";
    cout << "\"hi\" shows " << times(cvec, hi) << " times" << endl;
    return 0;
}