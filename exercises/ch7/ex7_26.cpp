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

struct sales_data {
public:
    sales_data() = default;
    sales_data(const string &s) :
        bookNo(s) {
    }
    sales_data(const string &s, unsigned n, double p) :
        bookNo(s), unit_solds(n), revenue(p * n) {
    }

    sales_data(istream &);

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

sales_data add(const sales_data &, const sales_data &);
std::ostream &print(std::ostream &, const sales_data &);
std::istream &read(std::istream &, const sales_data &);

inline
double sales_data::avg_price() const {
    return this->revenue;
}

sales_data &sales_data::combine(const sales_data &data) {
    this->unit_solds += data.unit_solds;
    this->revenue += data.revenue;
    return *this;
}
int main() {
    sales_data data;

    string s = data.isbn();
    cout << s << endl;
    return EXIT_SUCCESS;
}