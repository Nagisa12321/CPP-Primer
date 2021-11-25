#include "primer.h"
#include <cstring> 
using namespace std;

template <typename T>
int compare(const T &lhs, const T &rhs) {
    cout << "template <typename T> \n" 
         << "int compare(const T &lhs, const T &rhs)"
         << endl;
    if (lhs < rhs) return -1;
    else if (rhs < lhs) return 1;
    return 0;
}

// int compare(const char *clhs, const char *crhs) {
//     cout << "int compare(const char *clhs, const char *crhs)" << endl;
//     return strcmp(clhs, crhs);
// }

// template <unsigned N, unsigned M>
// int compare(const char (&c1)[N], const char (&c2)[M]) {
//     cout << "template <unsigned N, unsigned M>\n"
//          << "int compare(const char (&c1)[N], const char (&c2)[M])"
//          << endl;
//     return -1;
// }

template <>
int compare(const char *const &lhs, const char *const &rhs) {
    cout << "template <char *> int compare(const char * &lhs, const char * &rhs)" << endl;
    return -1;
}

// template <> int compare(const char *const &clhs, const char *const &crhs) {
//     cout << "template <> int compare(const char *const &clhs, const char *const &crhs)" << endl;
//     return -1;
// }

int main() {
    char ca[10] = { 0 }, ca1[20] = { 0 };
    compare(1, 2);
    compare("hello", "world");
    char *pca = ca, *pca1 = ca1;
    compare(pca, pca1);

    const char *a;
    auto &ra = a;

    return 0;
}