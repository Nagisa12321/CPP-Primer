#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

class Account { 
public:
    Account(double amount) : amount(amount) {}

    double check_amount() { return this->amount; }
    void add_amount(double add) { this->amount += add; }
    double rate() { return this->amount * interestRate; }
    void show() { cout << "amount is: " << amount << ", rate is " << rate() << endl; }
    
    static void rate(double r) { Account::interestRate = r; }
private:
    double amount;
    static double interestRate;
};

double Account::interestRate = 0.10;

int main() {
    Account acc1(2000.0);
    Account acc2(3000.0);
    acc1.show();
    acc2.show();

    acc1.add_amount(500.00);
    acc1.show();
    acc2.show();

    acc1.rate(0.15);
    acc1.show();
    acc2.show();
    
    return EXIT_SUCCESS;
}