#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

class Person {
    int _age;

public:
    Person(int age) : _age(age) {
        cout << "Construct a person: " << _age << endl;
    }

    Person(const Person &p) : _age(p._age) {
        cout << "Copy-Construct: " << _age << endl;
    }

    Person(const Person &&p) noexcept: _age(p._age) {
        cout << "Move-Construct: " << _age << endl;
    }
};

int main() {
    vector<Person> v;
    Person p(18); 
    v.push_back(p);
    v.emplace_back(p);
    return 0;
}