#include <iostream>
#include <vector>
#include <cstdio>
#include <map>

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
    Person() = default;
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

int main() {
    Person person("JT Chen", "Shen Zhen");
    print(cout, person) << endl;

    return EXIT_SUCCESS;
}