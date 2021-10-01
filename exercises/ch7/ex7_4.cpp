#include <iostream>
#include <vector>
#include <cstdio>
#include <map>

using std::cin;
using std::cout;
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
    Person(const string &, const string &);
    const string &get_name() const;
    const string &get_address() const;
    void show() const;
};

Person::Person(const string &name, const string &address) {
    this->name = name;
    this->address = address;
}

const string &Person::get_name() const {
    return this->name;
}

const string &Person::get_address() const {
    return this->address;
}

void Person::show() const {
    cout << "name: " << this->name << ", address: " << this->address << endl;
}

int main() {
    Person person("Pekora", "Japan");
    person.show();
    return EXIT_SUCCESS;
}