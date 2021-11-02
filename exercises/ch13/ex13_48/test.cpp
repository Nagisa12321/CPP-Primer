#include <chrono>
#include "../primer.h"
#include "String.h"

using namespace std;

int copy_times;

int main() {
    String s("hello");

    cout << "test start!" << endl;
    for (int time = 10; time <= 10; time *= 10) {
        vector<String> svec;
        copy_times = 0;
        for (int i = 0; i < time; ++i)
            svec.push_back(s);
        cout << "push_back: " << time  
             << ", copy_times: " << copy_times
             << endl;  
    }
    /*
        test start!
        push_back: 10, copy_times: 25
        push_back: 100, copy_times: 227
        push_back: 1000, copy_times: 2023
        push_back: 10000, copy_times: 26383
        push_back: 100000, copy_times: 231071
        push_back: 1000000, copy_times: 2048575
        push_back: 10000000, copy_times: 26777215
        ^C
    */
   vector<String> svec;
   svec.push_back(String("hello"));
   cout << " --- " << endl;
   svec.emplace_back("hi");

    return 0;
}
