#include <iostream>
#include <vector>
#include <cstdio>
#include <map>
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::istream;
using std::ostream;
using std::endl;
using std::vector;
using std::string;
using std::rand;
using std::begin;
using std::end;
using std::map;

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

void showPerson(Person p) {
    cout << p.to_string() << endl;
}

void showItem(Sales_item item) {
    cout << item << endl;
}

int main() {
    Person p1("test1", "test1");
    showPerson(p1);

    Sales_item item("test2");
    showItem(item);
    showItem(string("test3"));
    showPerson(Person(string("test4"), string("test4")));
    showPerson(string("test5"));
    return EXIT_SUCCESS;
}