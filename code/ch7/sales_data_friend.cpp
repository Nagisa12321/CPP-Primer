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
struct sales_data;

// sales_data add(const sales_data &, const sales_data &);
// std::ostream &print(std::ostream &, const sales_data &);
// std::istream &read(std::istream &, sales_data &);

struct sales_data {
    friend sales_data add(const sales_data &, const sales_data &);
    friend std::ostream &print(std::ostream &, const sales_data &);
    friend std::istream &read(std::istream &, sales_data &);

public:
    sales_data() = default;
    sales_data(const string &s) :
        bookNo(s) {
    }
    sales_data(const string &s, unsigned n, double p) :
        bookNo(s), unit_solds(n), revenue(p * n) {
    }

    sales_data(istream &) {
        read(cin, *this);
    }

    string isbn() const {
        return this->bookNo;
    }
    sales_data &combine(const sales_data &);
    double avg_price() const;

private:
    string bookNo;
    unsigned unit_solds;
    double revenue = 0.0;
};

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

ostream &print(ostream &out, const sales_data &data) {
    cout << data.bookNo << " " << data.revenue << " " << data.unit_solds;
    return cout;
}

double sales_data::avg_price() const {
    return this->revenue;
}

sales_data &sales_data::combine(const sales_data &data) {
    this->unit_solds += data.unit_solds;
    this->revenue += data.revenue;
    return *this;
}
int main() {
    sales_data data(cin);
    print(cout, data) << endl;
    return EXIT_SUCCESS;
}