#include "primer.h"
using namespace std;

template <typename T> string debug_rep(const T &t);
template <typename T> string debug_rep(T *t);
string debug_rep(const string &s);
template <> string debug_rep(char *str);
template <> string debug_rep(const char *str);

template <typename T> string debug_rep(const T &t) {
    ostringstream oss;
    oss << t;
    return oss.str();
}

template <typename T> string debug_rep(T *t) {
    ostringstream oss;
    oss << "pointer: " << t;
    if (t) oss << " " << debug_rep(*t);
    else oss << " null pointer";
    return oss.str();
}

string debug_rep(const string &s) {
    ostringstream oss;
    oss << "\"" << s << "\"";
    return oss.str();
}

template <>
string debug_rep(char *str) {
    cout << "[char *]" << endl;
    return debug_rep(string(str));
}

template <>
string debug_rep(const char *str) {
    cout << "[const char *]" << endl;
    return debug_rep(string(str));
}

int main() {
    {
        cout << "test1: " << endl;
        int i = 42, *pi = &i, *p0 = nullptr;
        cout << debug_rep(i) << endl;
        cout << debug_rep(pi) << endl;
        cout << debug_rep(p0) << endl;
    }
    {
        cout << "\ntest2: " << endl;
        string s("hi");
        // const string &
        cout << debug_rep(s) << endl;
        // const string *&, string *
        cout << debug_rep(&s) << endl;

        const string *cps = &s;
        cout << debug_rep(cps) << endl;
    }
    {
        cout << "\ntest3: " << endl;
        cout << debug_rep("hello world") << endl; 
    }
    {
        cout << "\ntest4: " << endl;
        char ia[] = "hi";
        char *a = ia;
        const char *b = "world";
        cout << debug_rep(a) << endl;
        cout << debug_rep(b) << endl;
    }
    return 0;
}