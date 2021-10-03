#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

class Account {
public:
    static double rate() { return interestRate; }
private:
    static constexpr int period = 30;
    double daily[period];
    static double interestRate;
};  

int main() {
    
    return EXIT_SUCCESS;
}