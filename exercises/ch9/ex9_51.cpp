#include <iostream>
#include <cstdio>
#include <algorithm>
#include <unordered_map>
#include <list>
#include <vector>
#include <forward_list>

using namespace std;

class date {
public:
    date(string date) {
        if (date.find_first_of('/') == string::npos) {
            size_t pos0 = date.find_first_of(' ');
            size_t pos1 = date.find_last_of(' ');
            month = month_map.at(date.substr(0, pos0));
            day = stoi(date.substr(pos0 + 1, pos1));
            year = stoi(date.substr(pos1 + 1));

        } else {
            size_t pos0 = date.find_first_of('/');
            size_t pos1 = date.find_last_of('/');
            month = stoi(date.substr(0, pos0));
            day = stoi(date.substr(pos0 + 1, pos1));
            year = stoi(date.substr(pos1 + 1));
        }
    }

    void show() {
        cout << "year: " << year << endl
             << "month: " << month << endl
             << "day: " << day << endl;
    }

private:
    unsigned year;
    unsigned month;
    unsigned day;

    const static unordered_map<string, unsigned> month_map;
};

const unordered_map<string, unsigned> date::month_map{
    {"January", 1},
    {"February", 2},
    {"March", 3},
    {"April", 4},
    {"May", 5},
    {"June", 6},
    {"July", 7},
    {"August", 8},
    {"Setpember", 9},
    {"October", 10},
    {"November", 11},
    {"December", 12},
};

int main() {
    date d1("1/2/2020");
    d1.show();

    date d2("January 1, 1999");
    d2.show();

    date d3("Setpember 16 1999");
    d3.show();
    return 0;
}