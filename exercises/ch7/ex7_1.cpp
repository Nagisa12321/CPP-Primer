#include <iostream>
#include <vector>
#include <cstdio>
#include <map>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::istream;
using std::ostream;
using std::vector;
using std::string;
using std::rand;
using std::begin;
using std::end;
using std::map;

istream &read(istream &in, Sales_data &data);
void combine(Sales_data &total, const Sales_data &add);
ostream &print(ostream &out, const Sales_data &data);

int main() {
    Sales_data total;
    if (read(cin, total)) {
        Sales_data trans;
        while (read(cin, trans)) {
            if (total.bookNo == trans.bookNo)
                combine(total, trans);
            else {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    } else {
        cerr << "No data? " << endl;
    }
    return EXIT_SUCCESS;
}

istream &read(istream &in, Sales_data &data) {
    decltype(data.bookNo) no;
    decltype(data.revenue) rev;
    decltype(data.units_sold) solds;

    cin >> no >> rev >> solds;
    data.bookNo = no;
    data.revenue = rev;
    data.units_sold = solds;
    return cin;
}

void combine(Sales_data &total, const Sales_data &add) {
    total.units_sold += add.units_sold;
}

ostream &print(ostream &out, const Sales_data &data) {
    cout << data.bookNo << " " << data.revenue << " " << data.units_sold;
    return cout;
}