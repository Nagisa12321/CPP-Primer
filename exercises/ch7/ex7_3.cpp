#include <iostream>
#include <vector>
#include <cstdio>
#include <map>

using std::cin;
using std::cout;
using std::cerr;
using std::istream;
using std::ostream;
using std::endl;
using std::vector;
using std::string;
using std::rand;
using std::begin;
using std::end;
using std::map;

struct sales_data {
    string isbn() const {
        return this->bookNo;
    }
    sales_data &combine(const sales_data &);
    double avg_price() const;

    string bookNo;
    unsigned unit_solds;
    double revenue = 0.0;
};

sales_data add(const sales_data &, const sales_data &);
std::ostream &print(std::ostream &, const sales_data &);
std::istream &read(std::istream &, const sales_data &);

double sales_data::avg_price() const {
    return this->revenue;
}

sales_data &sales_data::combine(const sales_data &data) {
    this->unit_solds += data.unit_solds;
    this->revenue += data.revenue;
    return *this;
}

ostream &print(ostream &out, const sales_data &data) {
    cout << data.bookNo << " " << data.revenue << " " << data.unit_solds;
    return cout;
}

istream &read(istream &in, sales_data &data) {
    decltype(data.bookNo) no;
    decltype(data.revenue) rev;
    decltype(data.unit_solds) solds;

    cin >> no >> rev >> solds;
    data.bookNo = no;
    data.revenue = rev;
    data.unit_solds = solds;
    return cin;
}

int main() {
    sales_data total;
    if (read(cin, total)) {
        sales_data trans;
        while (read(cin, trans)) {
            if (total.bookNo == trans.bookNo)
                total.combine(trans);
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