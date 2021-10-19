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

    void add_surname(const string &);
    void add_child(const string &, const string &, const string &);
    void show_families();

private:
    map<string, vector<pair<string, string>>> families;
};

void Family::add_child(const string &surname, 
                       const string &child_name, 
                       const string &birthday) {
    if (!families.count(surname))
        return;
    families[surname].push_back({child_name, birthday});
}

void Family::add_surname(const string &surname) {
    if (families.count(surname))
        return;
    families[surname] = vector<pair<string, string>>();
}

void Family::show_families() {
    for (const pair<string, vector<pair<string, string>>> &entry : families) {
        cout << entry.first << ": " << endl;
        for (const pair<string, string> &info : entry.second)
            cout << "[" << info.first << ", " << info.second << "] ";
        cout << endl;
    }
}

int main() {
    Family fam;
    fam.add_surname("Chen");
    fam.add_child("Chen", "Jia Ting", "1999-09-16");
    fam.add_child("Chen", "Q", "1999-09-16");
    fam.add_child("Chen", "A", "1999-09-16");

    fam.add_surname("Ma");
    fam.add_child("Ma", "Hua Teng", "1999-09-16");
    fam.add_child("Ma", "Yun", "1999-09-16");

    fam.show_families();
    return 0;
}