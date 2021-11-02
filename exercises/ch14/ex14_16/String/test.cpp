#include <chrono>
#include "../../primer.h"
#include "String.h"

using namespace std;

int main() {
    cout << "test1: " << endl;
    String s1 = "hello";
    String s2 = "world";
    String s3 = "hello";
    cout << (s1 == s2) << endl;
    cout << (s1 == s3) << endl;


    cout << "test2: " << endl;
    String s4 = "hello", s5 = s4;
    cout << (s4 < s5) << endl;
    cout << (s5 < s4) << endl;


    cout << "test3: " << endl;
    String s6 = "abcde";
    String s7 = "abcdef";
    cout << (s6 < s7) << endl;
    return 0;
}
