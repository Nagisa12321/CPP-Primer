// io
#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <cstdio>

// containers
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <vector>
#include <forward_list>

// algorithm
#include <algorithm>
#include <iterator>
#include <numeric>

using namespace std;

class Family {
public:
    Family() = default;

    void add_surname(const string &surname);
    void add_child(const string &surname, const string &child_name);
    void show_families();

private:
    map<string, vector<string>> families;
};

void Family::add_child(const string &surname, const string &child_name) {
    if (!families.count(surname))
        return;
    families[surname].push_back(child_name);
}

void Family::add_surname(const string &surname) {
    if (families.count(surname))
        return;
    families[surname] = vector<string>();
}

void Family::show_families() {
    for (const pair<string, vector<string>> &entry : families) {
        cout << entry.first << ": " << endl;
        for (const string &name : entry.second)
            cout << name << " ";
        cout << endl;
    }
}

int main() {
    Family fam;
    fam.add_surname("Chen");
    fam.add_child("Chen", "Jia Ting");
    fam.add_child("Chen", "Q");
    fam.add_child("Chen", "A");

    fam.add_surname("Ma");
    fam.add_child("Ma", "Hua Teng");
    fam.add_child("Ma", "Yun");

    fam.show_families();
    return 0;
}