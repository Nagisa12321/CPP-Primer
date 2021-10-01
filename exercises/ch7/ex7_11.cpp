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

struct sales_data;
sales_data add(const sales_data &, const sales_data &);
ostream &print(std::ostream &, const sales_data &);
istream &read(std::istream &, sales_data &);

struct sales_data {
    sales_data() = default;

    sales_data(const string &s) :
        bookNo(s) {
    }

    sales_data(const string &s, unsigned n, double p) :
        bookNo(s), unit_solds(n), revenue(n * p) {
    }

    sales_data(istream &is) {
        read(is, *this);
    }

    string isbn() const {
        return this->bookNo;
    }
    sales_data &combine(const sales_data &);
    double avg_price() const;

    string bookNo;
    unsigned unit_solds;
    double revenue = 0.0;
};

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
    sales_data s1;
    sales_data s2("s2");
    sales_data s3("s3", 10, 2.99);
    sales_data s4(cin);

    print(cout, s1) << endl;
    print(cout, s2) << endl;
    print(cout, s3) << endl;
    print(cout, s4) << endl;
    return EXIT_SUCCESS;
}