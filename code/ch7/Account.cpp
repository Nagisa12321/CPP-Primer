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
    static void rate(double r) { Account::interestRate = r; };
    static constexpr int period = 30;
private:
    double daily[period];
    static double interestRate;
};  

double Account::interestRate = 100;
constexpr int Account::period ;

void func(const int &num) {
    cout << num << endl;
}

int main() {
    cout << Account::rate() << endl;
    Account::rate(1024);
    cout << Account::rate() << endl;

    func(Account::period);
    return EXIT_SUCCESS;
}