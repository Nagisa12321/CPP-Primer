#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <algorithm>
#include <map>
#include <sstream>

using namespace std;

class person_info {
public:
    person_info(const string &name) : name(name) {}

    void add_phone(const string &phone) {
        this->phones.push_back(phone);
    }

    void show() const {
        cout << name << ": ";
        for (const string &s : phones)  
            cout << s << " ";
        cout << endl;
    }
private: 
    string name;
    vector<string> phones;
};

int main() {
    string line, word;
    vector<person_info> people;
    while (getline(cin, line)) {
        istringstream iss(line);
        string name;
        iss >> name;
        person_info info(name);

        while (iss >> word)
            info.add_phone(word);
        
        people.push_back(info);
    }

    for (const person_info &pi : people)
        pi.show();
    return 0;
}