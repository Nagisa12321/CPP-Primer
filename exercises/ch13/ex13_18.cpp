#include "primer.h"
using namespace std;

class Employee {
    friend int main();

public:
    Employee() = default;
    Employee(string name);
    Employee(const Employee &) = delete;
    Employee &operator=(const Employee &) = delete;

private:
    static int static_id;
    string name;
    int id;
};

int Employee::static_id = 1000;

Employee::Employee(string name) :
    name(name), id(static_id++) {
}

int main() {
    Employee emp1("CJT");
    cout << emp1.name << ", " << emp1.id << endl;
    Employee emp2("YYL");
    cout << emp2.name << ", " << emp2.id << endl;
    return 0;
}