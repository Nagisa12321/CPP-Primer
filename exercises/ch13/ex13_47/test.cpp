#include <chrono>
#include "../primer.h"
#include "String.h"

using namespace std;

int main() {
    cout << "test 1: " << endl;
    String s1("hello");

    cout << "test 2: " << endl;
    String s2 = String("hello");

    cout << "test 3: " << endl;
    String *s3 = new String("hello");

    cout << "test 4: " << endl;
    String s4  = "hello";
    String s5 = s4;

    cout << "test 5: " << endl;
    s4 = s5;
    
    delete s3;
    return 0;
}
