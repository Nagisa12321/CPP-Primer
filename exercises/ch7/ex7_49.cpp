#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

class Person {
private:
    string name;
    string address;

public:
    Person() : Person("", "") {}
    Person(const string &name) : Person(name, "") {}
    Person(const string &, const string &);
    const string &get_name() const;
    const string &get_address() const;
    string to_string() const;
    static istream &read(istream &, Person &);  
};

Person::Person(const string &name, const string &address) :
    name(name), address(address) {
}

const string &Person::get_name() const {
    return this->name;
}

const string &Person::get_address() const {
    return this->address;
}

string Person::to_string() const {
    string s = "name: " + this->name + ", address: " + this->address;
    return s;
}

istream &Person::read(istream &in, Person &person) {
    in >> person.name >> person.address;
    return in;
}

ostream &print(ostream &out, const Person &person) {
    out << person.to_string();
    return out;
}

void showPerson1(Person p) {
    cout << p.to_string() << endl;
}
void showPerson2(Person &p) {
    cout << p.to_string() << endl;
}
void showPerson3(const Person &p) {
    cout << p.to_string() << endl;
}

int main() {
    string s = "hello";
    Person p(s);
    showPerson1(s);
    showPerson2(p);
    showPerson3(s);
}