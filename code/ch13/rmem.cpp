#include "primer.h"
using namespace std;

int main() {
    cout << "test1: " << endl;
    string s1 = "a value", s2 = "another";
    auto n = (s1 + s2).find('a');
    cout << n << endl;

    cout << "test2: " << endl;
    string s3 = "a value", s4 = "another";
    char &ch = (s3 + s4)[7];
    ch = '?';
    cout << ch << endl;
    cout << &ch << endl;
    cout << (void *)&ch << endl;
    cout << (void *)(s3.c_str()) << endl;
    cout << (void *)(s4.c_str()) << endl;
    cout << "s3: " << s3 << ", s4: " << s4 << endl;
    string s5 = "hello";
    char &ch1 = (s3 + s5)[0];
    cout << &ch << endl;
    cout << (void *)&ch << endl;
    cout << (void *)(s5.c_str()) << endl;

    cout << "test3" << endl;
    string s6 = "hi", s7 = "hello";
    cout << (s6 + s7).c_str() << endl;
    cout << (void *)(s6 + s7).c_str() << endl;
    (s6 + s7) = "fuck";
    cout << (s6 + s7).c_str() << endl;
    cout << (void *)(s6 + s7).c_str() << endl;

    cout << "test4: " << endl;
    string s8 = "hi", s9 = "hello";
    s8 + s9 = "fuck";
    cout << s8 + s9 << endl;
    cout << (s8 + s9).c_str() << endl;
    return 0;
}