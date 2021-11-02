#include <chrono>
#include "../primer.h"
#include "String.h"

using namespace std;

int main() {
    cout << "test 1: " << endl;
    String s1;
    for (int i = 0; i < 30; ++i) {
        s1.push_back('a');
        cout << "size: " << s1.size()
             << ", capacity: " << s1.capacity()
             << endl;
    }

    cout << "test 2: " << endl;
    cout << s1 << endl;
    String s2 = s1;
    cout << s2 << endl;

    cout << "test 3: " << endl;
    String s3 = "hello world";
    cout << s3 << endl;
    String::iterator it3 = s3.begin();
    while (it3 != s3.end()) {
        cout << *it3++ << ' ';
    }
    cout << endl;

    cout << "test 4: " << endl;
    String s4;
    String::iterator it4 = s4.begin();
    while (it4 != s4.end()) {
        cout << *it4++ << ' ';
    }
    cout << endl;

    cout << "test 5: " << endl;
    String s5("hello world!");
    cout << s5 << endl;
    reverse(s5.begin(), s5.end());
    cout << s5 << endl;

    cout << "test 6: " << endl;
    String s6 = "hello world";
    for (int i = 0; i < s6.size(); ++i)
        cout << s6[i] << " ";
    cout << endl;

    cout << "speed test: " << endl;
    string speed0;
    String speed1;
    auto start0 = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < INT32_MAX; ++i) {
        speed0.push_back('a');
    }
    auto stop0 = std::chrono::high_resolution_clock::now();

    auto start1 = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < INT32_MAX; ++i) {
        speed1.push_back('a');
    }
    auto stop1 = std::chrono::high_resolution_clock::now();
    auto duration0 = std::chrono::duration_cast<std::chrono::microseconds>(stop0 - start0);
    auto duration1 = std::chrono::duration_cast<std::chrono::microseconds>(stop1 - start1);

    cout << "time of string with 10000000 char: " << duration0.count() << endl;
    cout << "time of String with 10000000 char: " << duration1.count() << endl;
    return 0;
}
